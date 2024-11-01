#include "Tabla.h"

using namespace std;

Tabla::Tabla() {
    int counter = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabla[i][j] = '0' + counter;
            counter++;
        }
    }
}
Tabla::Tabla(const Tabla& other) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabla[i][j] = other.tabla[i][j];
        }
    }
}

Tabla& Tabla::operator=(const Tabla& other) {
    if (this != &other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tabla[i][j] = other.tabla[i][j];
            }
        }
    }
    return *this;
}
bool Tabla::operator==(const Tabla& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabla[i][j] != other.tabla[i][j]) {
                return false;
            }
        }
    }
    return true;
}

ostream& operator<<(ostream& os, const Tabla& tabla) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            os << tabla.tabla[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

istream& operator>>(istream& is, Tabla& tabla) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            is >> tabla.tabla[i][j];
        }
    }
    return is;
}

void Tabla::deseneazaTabla() {
    cout << " " << tabla[0][0] << " | " << tabla[0][1] << " | " << tabla[0][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << tabla[1][0] << " | " << tabla[1][1] << " | " << tabla[1][2] << endl;
    cout << "---|---|---" << endl;
    cout << " " << tabla[2][0] << " | " << tabla[2][1] << " | " << tabla[2][2] << endl;
}

bool Tabla::puneMarcaj(int pozitie, char marcaj) {
    int rand = (pozitie - 1) / 3;
    int coloana = (pozitie - 1) % 3;

    if (tabla[rand][coloana] != 'X' && tabla[rand][coloana] != 'O') {
        tabla[rand][coloana] = marcaj;
        return true;
    }
    return false;
}

int Tabla::verificaCastigator() {
    for (int i = 0; i < 3; i++) {
        if (tabla[i][0] == tabla[i][1] && tabla[i][1] == tabla[i][2])
            return 1;
        if (tabla[0][i] == tabla[1][i] && tabla[1][i] == tabla[2][i])
            return 1;
    }
    if (tabla[0][0] == tabla[1][1] && tabla[1][1] == tabla[2][2])
        return 1;
    if (tabla[0][2] == tabla[1][1] && tabla[1][1] == tabla[2][0])
        return 1;

    return 0;
}
