#include "Tabla.h"
#include <algorithm>

Tabla::Tabla() : tabla(9, "") {
    int counter = 1;
    std::generate(tabla.begin(), tabla.end(), [&counter]() { return std::to_string(counter++); });
}

void Tabla::deseneazaTabla() {
    for (int i = 0; i < 9; i += 3) {
        std::cout << " " << tabla[i] << " | " << tabla[i + 1] << " | " << tabla[i + 2] << std::endl;
        if (i < 6) std::cout << "---|---|---" << std::endl;
    }
}

bool Tabla::puneMarcaj(int pozitie, const std::string& marcaj) {
    if (tabla[pozitie - 1] != "X" && tabla[pozitie - 1] != "O") {
        tabla[pozitie - 1] = marcaj;
        return true;
    }
    return false;
}

int Tabla::verificaCastigator() {
    for (int i = 0; i < 3; i++) {
        if (tabla[i * 3] == tabla[i * 3 + 1] && tabla[i * 3 + 1] == tabla[i * 3 + 2])
            return 1;
        if (tabla[i] == tabla[i + 3] && tabla[i + 3] == tabla[i + 6])
            return 1;
    }
    if (tabla[0] == tabla[4] && tabla[4] == tabla[8]) return 1;
    if (tabla[2] == tabla[4] && tabla[4] == tabla[6]) return 1;
    return 0;
}
