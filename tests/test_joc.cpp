#include "catch.hpp"
#include "../Joc.h"

TEST_CASE("Testare schimbare jucator", "[Joc]") {
    Joc joc("X");
    REQUIRE(joc.jucator_curent == 1);
    REQUIRE(joc.marcaj_curent == "X");
    joc.schimbaJucator();
    REQUIRE(joc.jucator_curent == 2);
    REQUIRE(joc.marcaj_curent == "O");
}

TEST_CASE("Testare initializare joc", "[Joc]") {
    Joc joc("X");
    REQUIRE(joc.tabla != nullptr);
    REQUIRE(joc.marcaj_curent == "X");
    REQUIRE(joc.jucator_curent == 1);
}

