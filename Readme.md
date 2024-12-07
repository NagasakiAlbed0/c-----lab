# Proiect: Tic-Tac-Toe (X si 0)

## Descrierea Proiectului
Denumirea proiectului: **trythree**  
Acest proiect implementeaza un joc simplu de X si 0 (Tic-Tac-Toe) utilizand limbajul C++. Jocul permite doi jucatori sa introduca pozitiile pe tabla, iar jocul se incheie atunci cand unul dintre jucatori castiga completand o linie, o coloana sau o diagonala, sau cand se termina cu o remiza (egalitate) daca tabla este completa.

## Structura Fisierelor
- **Joc.cpp si Joc.h**: Contin logica jocului, gestionarea schimbarii jucatorilor si implementarea secventelor principale de joc.
- **Tabla.cpp si Tabla.h**: Implementeaza functionalitatile legate de desenarea tablei, plasarea marcajelor si verificarea castigatorului.
- **Main.cpp**: Punctul de intrare in aplicatie, unde se initializeaza jocul si se ruleaza mecanica principala.
- **Makefile**: Fisier de constructie care automatizeaza compilarea si legarea aplicatiei, inclusiv testele.
- **.gitignore**: Fisier care ignora fisierele inutile pentru Git, precum fisierele obiect (`*.o`) si executabilele (`*.exe`).
- **tests/**: Director care contine fisierele de testare ale claselor proiectului.

## Regulile Jocului
1. Jocul este pentru doi jucatori.
2. Fiecare jucator isi alege pe rand o pozitie pe tabla, introducand un numar intre 1 si 9.
3. Primul jucator foloseste marcajul "X", iar al doilea foloseste "O".
4. Jocul se incheie atunci cand unul dintre jucatori completeaza o linie, o coloana sau o diagonala cu propriul marcaj sau cand toate pozitiile sunt ocupate, iar rezultatul este egalitate.

## Dependinte
- Compilator: **g++**
- Biblioteci terte utilizate: **Catch2** (pentru testare)
- Sistem de operare: Linux sau Windows (cu suport pentru Makefile)

## Modul de Construire a Aplicatiei
1. Clonati proiectul din GitHub:  
   ```bash
   git clone <URL-repository>
   cd <repository>
   git checkout lab06
