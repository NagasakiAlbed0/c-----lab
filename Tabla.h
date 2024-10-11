class Tabla {
public:
    char tabla[3][3];

    // Constructri
    Tabla();  // Constructor implicit
    Tabla(const Tabla& other);  // Constructor de copiere

    // Operator de copier
    Tabla& operator=(const Tabla& other);

    // Operator de comparare
    bool operator==(const Tabla& other) const;

    void deseneazaTabla();
    bool puneMarcaj(int pozitie, char marcaj);
    int verificaCastigator();
};
