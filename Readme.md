Acest proiect s enumeste ,,TRY THREE"
Proiectul reprezintă implementarea unui joc clasic de Tic-Tac-Toe (X și O) folosind limbajul C++. 
REgulile:Jocul permite doi jucători să alterneze pe o tablă de 3x3, plasând marcaje (X sau O) până când unul dintre jucători câștigă, completând o linie, o coloană sau o diagonală cu propriul marcaj, sau până când jocul se termină cu o remiză dacă tabla este plină.

Tabla (Tabla.hpp, Tabla.cpp):

Reprezintă tabla de joc sub forma unei matrice 3x3.
Am creat metode pentru a desena tabla, a plasa marcaje și a verifica câștigătorul după fiecare mutare.

Joc (Joc.hpp, Joc.cpp):

Găzduiește logica principală a jocului, gestionând rândul fiecărui jucător și fluxul jocului.
Am implementat o metodă care comută între jucători după fiecare mutare și determină când se termină jocul.
main.cpp:

Acesta este punctul de intrare al programului. Am creat un obiect de tip Joc și am lansat jocul prin intermediul metodei principale din clasa Joc.
