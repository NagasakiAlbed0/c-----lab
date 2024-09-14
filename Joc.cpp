#include "Joc.h"

using namespace std;

Joc::Joc(char marcaj_jucator1) {
    marcaj_curent = marcaj_jucator1;
    jucator_curent = 1;
}

void Joc::schimbaJucator() {
    jucator_curent = (jucator_curent == 1) ? 2 : 1;
    marcaj_curent = (marcaj_curent == 'X') ? 'O' : 'X';
}

void Joc::incepeJoc() {
    tabla.deseneazaTabla();
    int castigator = 0;

    for (int i = 0; i < 9; i++) {
        cout << "Este rândul jucătorului " << jucator_curent << ". Introdu poziția: ";
        int pozitie;
        cin >> pozitie;

        if (pozitie < 1 || pozitie > 9) {
            cout << "Poziție invalidă! Încearcă din nou.\n";
            i--;
            continue;
        }

        if (!tabla.puneMarcaj(pozitie, marcaj_curent)) {
            cout << "Poziție ocupată! Încearcă din nou.\n";
            i--;
            continue;
        }

        tabla.deseneazaTabla();

        castigator = tabla.verificaCastigator();
        if (castigator != 0) {
            cout << "Jucătorul " << jucator_curent << " a câștigat!\n";
            break;
        }

        schimbaJucator();
    }

    if (castigator == 0) {
        cout << "Egalitate!\n";
    }
}
