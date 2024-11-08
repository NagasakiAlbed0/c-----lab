#ifndef TABLA_H
#define TABLA_H

#include <iostream>
#include <vector>
#include <string>

class Tabla {
public:
    std::vector<std::string> tabla;

    Tabla();
    void deseneazaTabla();
    bool puneMarcaj(int pozitie, const std::string& marcaj);
    int verificaCastigator();
};

#endif
