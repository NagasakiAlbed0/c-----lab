all: X_si_0

X_si_0: Joc.o Tabla.o main.o
    g++ -o X_si_0.exe Joc.o Tabla.o main.o

Joc.o:
    g++ Joc.cpp -o Joc.o -c

Tabla.o:
    g++ Tabla.cpp -o Tabla.o -c

main.o:
    g++ main.cpp -o main.o -c

clean:
    rm -f *.o *.exe
