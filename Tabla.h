#ifndef TABLA_H
#define TABLA_H

#include <iostream>

using namespace std;

class Tabla {
public:
    char tabla[3][3];

    Tabla();
    Tabla(const Tabla& other); 

    Tabla& operator=(const Tabla& other);

bool operator==(const Tabla& other) const;

    void deseneazaTabla();
    bool puneMarcaj(int pozitie, char marcaj);
    int verificaCastigator();
    };

ostream& operator<<(ostream& os, const Tabla& tabla);
  istream& operator>>(istream& is, Tabla& tabla);

 #endif
