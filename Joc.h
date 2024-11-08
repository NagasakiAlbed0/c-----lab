#ifndef JOC_H
#define JOC_H

#include "Tabla.h"
#include <memory>
#include <string>

class Joc {
public:
    std::unique_ptr<Tabla> tabla;
    std::string marcaj_curent;
    int jucator_curent;

    Joc(std::string marcaj_jucator1);
    void schimbaJucator();
    void incepeJoc();
};

#endif
