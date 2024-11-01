#ifndef JOC_H
#define JOC_H

#include "Tabla.h"
#include <iostream>

using namespace std;

class Joc {
public:
    Tabla tabla;
    char marcaj_curent;
    int jucator_curent;

    
    Joc(char marcaj_jucator1 = 'X');
    Joc(const Joc& other); 

    
    Joc& operator=(const Joc& other);

    
    bool operator==(const Joc& other) const;

    
    friend ostream& operator<<(ostream& os, const Joc& joc);

    friend istream& operator>>(istream& is, Joc& joc);

    void schimbaJucator();
    void incepeJoc();
};

#endif
