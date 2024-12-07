#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../Tabla.h"

TEST_CASE("Verificare initializare tabla", "[Tabla]") {
    Tabla tabla;
    REQUIRE(tabla.tabla.size() == 9);
    for (int i = 0; i < 9; ++i) {
        REQUIRE(tabla.tabla[i] == std::to_string(i + 1));
    }
}

TEST_CASE("Testare plasare marcaj", "[Tabla]") {
    Tabla tabla;
    REQUIRE(tabla.puneMarcaj(1, "X") == true);
    REQUIRE(tabla.tabla[0] == "X");
    REQUIRE(tabla.puneMarcaj(1, "O") == false);
}

TEST_CASE("Verificare castigator", "[Tabla]") {
    Tabla tabla;
    tabla.puneMarcaj(1, "X");
    tabla.puneMarcaj(2, "X");
    tabla.puneMarcaj(3, "X");
    REQUIRE(tabla.verificaCastigator() == 1);
}

