// Constructor implicit
Joc::Joc() : marcaj_curent('X'), jucator_curent(1) {}

// Constructor cu parametri
Joc::Joc(char marcaj_jucator1) : marcaj_curent(marcaj_jucator1), jucator_curent(1) {}

// Constructor de copiere
Joc::Joc(const Joc& other) {
    this->tabla = other.tabla;
    this->marcaj_curent = other.marcaj_curent;
    this->jucator_curent = other.jucator_curent;
}

// Operator de copiere
Joc& Joc::operator=(const Joc& other) {
    if (this != &other) {
        this->tabla = other.tabla;
        this->marcaj_curent = other.marcaj_curent;
        this->jucator_curent = other.jucator_curent;
    }
    return *this;
}

// Operator de comparatie
bool Joc::operator==(const Joc& other) const {
    return (this->tabla == other.tabla &&
            this->marcaj_curent == other.marcaj_curent &&
            this->jucator_curent == other.jucator_curent);
}

// Operator << pentru afisare
ostream& operator<<(ostream& os, const Joc& joc) {
    os << "Jucator curent: " << joc.jucator_curent << " cu marcajul " << joc.marcaj_curent;
    return os;
}

// Operator >> pentru citire
istream& operator>>(istream& is, Joc& joc) {
    cout << "Introdu marcajul jucatorului: ";
    is >> joc.marcaj_curent;
    cout << "Introdu jucatorul curent (1 sau 2): ";
    is >> joc.jucator_curent;
    return is;
}
