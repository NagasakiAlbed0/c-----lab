#ifndef JOC_H
#define JOC_H

#include "Tabla.h"

using namespace std;

class Joc {
public:
    Tabla tabla;
    char marcaj_curent;
    int jucator_curent;

    Joc(char marcaj_jucator1);
    void schimbaJucator();
    void incepeJoc();
};

#endif
