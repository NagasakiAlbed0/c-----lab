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
    // Verifică rândurile
    for (int i = 0; i < 3; i++) {
        if (tabla[i][0] == tabla[i][1] && tabla[i][1] == tabla[i][2])
            return 1;
    }
    // Verifică coloanele
    for (int i = 0; i < 3; i++) {
        if (tabla[0][i] == tabla[1][i] && tabla[1][i] == tabla[2][i])
            return 1;
    }
    // Verifică diagonalele
    if (tabla[0][0] == tabla[1][1] && tabla[1][1] == tabla[2][2])
        return 1;
    if (tabla[0][2] == tabla[1][1] && tabla[1][1] == tabla[2][0])
        return 1;

    return 0;
}
