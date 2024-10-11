class Joc {
public:
    Tabla tabla;
    char marcaj_curent;
    int jucator_curent;

    // Constructori
    Joc();  // Constructor implicit
    Joc(char marcaj_jucator1);  // Constructor cu parametri
    Joc(const Joc& other);  // Constructor de copiere

    // Operator de copiere
    Joc& operator=(const Joc& other);

    // Operator de comparatie
    bool operator==(const Joc& other) const;

    // Operator << pentru afisare
    friend ostream& operator<<(ostream& os, const Joc& joc);

    // Operator >> pentru citire
    friend istream& operator>>(istream& is, Joc& joc);

    void schimbaJucator();
    void incepeJoc();
};
