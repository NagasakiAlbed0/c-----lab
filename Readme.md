Proiectul se numeste Snakegame ceia ce reprezinta un joc cu un sarpe ce se deplaseaza pe un teren.
Regurile sunt ca acesta sa nu iasa din suprafata terenului si sa nu se joveasca de el.

1. `struct Point` (în `point.hpp`):
   - Descriere: Structura `Point` reprezintă un punct în spațiu bidimensional. Aceasta are două membre de date: `x` și `y`, care sunt coordonatele punctului.
   - Obiecte: Obiectele de tip `Point` sunt utilizate pentru a specifica poziții în spațiu, cum ar fi poziția unei mere (Apple), poziția segmentelor unei șerpi (Snake), și punctele pentru desenare (Painter).

2. `class Apple` (în `apple.hpp`):
   - Descriere: Clasa `Apple` reprezintă un măr care are o poziție specificată de un obiect de tip `Point`. Aceasta include constructori pentru inițializarea poziției și metode pentru obținerea poziției.
   - Obiecte: Obiectele de tip `Apple` sunt folosite pentru a reprezenta merele care apar pe tablă în joc, având o poziție definită în spațiu.

3. `enum class Direction` (în `direction.hpp`):
   - Descriere: Enumerația `Direction` definește patru direcții posibile pentru mișcarea unui șarpe: `Top`, `Left`, `Right`, și `Bottom`.
   - Obiecte: Obiectele de tip `Direction` sunt utilizate pentru a specifica direcția în care se mișcă șarpele (Snake).

4. `class Snake` (în `snake.hpp`):
   - Descriere: Clasa `Snake` reprezintă un șarpe care are o serie de segmente (până la 100), fiecare având o poziție specificată de un obiect de tip `Point`. Include metode pentru mișcare, obținerea dimensiunii și poziției, precum și pentru a mânca un măr.
   - Obiecte: Obiectele de tip `Snake` sunt utilizate pentru a reprezenta șarpele în joc, gestionând pozițiile segmentelor sale și logica de mișcare.

5. `class Board` (în `board.hpp`):
   - Descriere: Clasa `Board` reprezintă tabla de joc, având o lățime și o înălțime specificate. Aceste dimensiuni definesc spațiul în care se desfășoară jocul.
   - Obiecte: Obiectele de tip `Board` sunt folosite pentru a reprezenta și gestiona dimensiunile tablei de joc în cadrul aplicației.

6. `class GameEngine` (în `game_engine.hpp`):
   - Descriere: Clasa `GameEngine` este motorul jocului, care conține obiectele `Apple`, `Snake`, și `Board`. Aceasta gestionează inițializarea jocului și rularea lui.
   - Obiecte: Obiectele de tip `GameEngine` sunt folosite pentru a controla și coordona jocul, inclusiv logica de inițializare și execuție.

7. `class Painter` (în `painter.hpp`):
   - Descriere: Clasa `Painter` este responsabilă pentru desenarea pe tablă și scrierea de text. Utilizează obiecte de tip `Point` pentru a specifica pozițiile.
   - Obiecte: Obiectele de tip `Painter` sunt folosite pentru a desena imagini și a scrie texte pe tablă, utilizând coordonate specifice.
