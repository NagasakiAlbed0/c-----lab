#ifndef TABLA_H
#define TABLA_H

#include <iostream>

using namespace std;

class Tabla {
public:
    char tabla[3][3]; 

    Tabla();
    void deseneazaTabla();
    bool puneMarcaj(int pozitie, char marcaj);
    int verificaCastigator();
};

#endif
