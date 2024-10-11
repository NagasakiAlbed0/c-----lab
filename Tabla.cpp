// Constructor de copie
Tabla::Tabla(const Tabla& other) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            this->tabla[i][j] = other.tabla[i][j];
        }
    }
}

// Operator de copiere
Tabla& Tabla::operator=(const Tabla& other) {
    if (this != &other) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                this->tabla[i][j] = other.tabla[i][j];
            }
        }
    }
    return *this;
}

// Operator de comparatie
bool Tabla::operator==(const Tabla& other) const {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (this->tabla[i][j] != other.tabla[i][j])
                return false;
        }
    }
    return true;
}
