all: X_si_0

X_si_0: main.o libJoc.a libTabla.a
	g++ -o X_si_0 main.o -L. -lJoc -lTabla

main.o: main.cpp Joc.h
	g++ -c main.cpp -o main.o

libJoc.a: Joc.o
	ar rcs libJoc.a Joc.o

Joc.o: Joc.cpp Joc.h Tabla.h
	g++ -c Joc.cpp -o Joc.o

libTabla.a: Tabla.o
	ar rcs libTabla.a Tabla.o

Tabla.o: Tabla.cpp Tabla.h
	g++ -c Tabla.cpp -o Tabla.o

clean:
	rm -f *.o *.a X_si_0
