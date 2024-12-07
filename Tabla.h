#ifndef TABLA_H
#define TABLA_H

#include <iostream>
#include <vector>
#include <string>

/// <summary>
/// Clasa care reprezinta tabla de joc pentru Tic-Tac-Toe.
/// </summary>
class Tabla {
public:
    /// <summary>
    /// Constructor implicit care initializeaza tabla.
    /// </summary>
    Tabla();

    /// <summary>
    /// Afiseaza tabla de joc in consola.
    /// </summary>
    void deseneazaTabla();

    /// <summary>
    /// Plaseaza un marcaj pe tabla de joc.
    /// </summary>
    /// <param name="pozitie">Pozitia pe tabla de joc (1-9).</param>
    /// <param name="marcaj">Marcajul de plasat (X sau O).</param>
    /// <returns>
    /// True daca marcajul a fost plasat cu succes, False daca pozitia este deja ocupata.
    /// </returns>
    bool puneMarcaj(int pozitie, const std::string& marcaj);

    /// <summary>
    /// Verifica daca exista un castigator.
    /// </summary>
    /// <returns>
    /// 1 daca exista un castigator, 0 altfel.
    /// </returns>
    int verificaCastigator();

private:
    std::vector<std::string> tabla; ///< Vector care reprezinta tabla de joc.
};

#endif
