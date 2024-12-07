#ifndef JOC_H
#define JOC_H

#include "Tabla.h"
#include <memory>
#include <string>

/// <summary>
/// Clasa Joc gestioneaza logica jocului Tic-Tac-Toe, incluzand schimbarea jucatorilor
/// si initierea jocului.
/// </summary>
class Joc {
public:
    std::unique_ptr<Tabla> tabla;     ///< Tabla de joc.
    std::string marcaj_curent;        ///< Marcajul jucatorului curent (X sau O).
    int jucator_curent;               ///< Numarul jucatorului curent (1 sau 2).

    /// <summary>
    /// Constructor al clasei Joc.
    /// </summary>
    /// <param name="marcaj_jucator1">Marcajul cu care incepe jucatorul 1.</param>
    Joc(std::string marcaj_jucator1);

    /// <summary>
    /// Schimba jucatorul curent si actualizeaza marcajul.
    /// </summary>
    void schimbaJucator();

    /// <summary>
    /// Initiaza si gestioneaza desfasurarea jocului.
    /// </summary>
    void incepeJoc();

    /// <summary>
    /// Salveaza scorul in baza de date.
    /// </summary>
    /// <param name="castigator">Numele castigatorului sau "Egalitate".</param>
    void salveazaScor(const std::string& castigator);
};

#endif
