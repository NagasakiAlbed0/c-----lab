#include "Joc.h"
#include <sqlite3.h>
#include <iostream>

Joc::Joc(std::string marcaj_jucator1) 
    : tabla(std::make_unique<Tabla>()), marcaj_curent(marcaj_jucator1), jucator_curent(1) {}

void Joc::schimbaJucator() {
    jucator_curent = (jucator_curent == 1) ? 2 : 1;
    marcaj_curent = (marcaj_curent == "X") ? "O" : "X";
}

void Joc::salveazaScor(const std::string& castigator) {
    sqlite3* db;
    int rc = sqlite3_open("scoruri.db", &db);
    if (rc) {
        std::cerr << "Eroare baza de date: " << sqlite3_errmsg(db) << std::endl;
        return;
    }

    std::string sql = "CREATE TABLE IF NOT EXISTS Scoruri (ID INTEGER PRIMARY KEY AUTOINCREMENT, Castigator TEXT);";
    char* errorMessage;
    rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "Eroare tabel: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    sql = "INSERT INTO Scoruri (Castigator) VALUES ('" + castigator + "');";
    rc = sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &errorMessage);
    if (rc != SQLITE_OK) {
        std::cerr << "Eroare salvare: " << errorMessage << std::endl;
        sqlite3_free(errorMessage);
    }

    sqlite3_close(db);
}

void Joc::incepeJoc() {
    tabla->deseneazaTabla();
    int castigator = 0;

    for (int i = 0; i < 9; i++) {
        std::cout << "Randul jucatorului " << jucator_curent << ". Introdu pozitia: ";
        int pozitie;
        std::cin >> pozitie;

        if (pozitie < 1 || pozitie > 9) {
            std::cout << "Pozitie invalida! Incearca din nou.\n";
            i--;
            continue;
        }

        if (!tabla->puneMarcaj(pozitie, marcaj_curent)) {
            std::cout << "Pozitie ocupata! Incearca din nou.\n";
            i--;
            continue;
        }

        tabla->deseneazaTabla();

        castigator = tabla->verificaCastigator();
        if (castigator != 0) {
            std::cout << "Jucatorul " << jucator_curent << " a castigat!\n";
            salveazaScor("Jucatorul " + std::to_string(jucator_curent));
            break;
        }

        schimbaJucator();
    }

    if (castigator == 0) {
        std::cout << "Egalitate!\n";
        salveazaScor("Egalitate");
    }
}
