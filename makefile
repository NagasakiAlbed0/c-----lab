# Compilare aplicatie
all: X_si_0

X_si_0: main.o libJoc.a libTabla.a
	g++ -o X_si_0 main.o -L. -lJoc -lTabla -lsqlite3

main.o: main.cpp Joc.h Tabla.h
	g++ -c main.cpp -o main.o

libJoc.a: Joc.o
	ar rcs libJoc.a Joc.o

Joc.o: Joc.cpp Joc.h Tabla.h
	g++ -c Joc.cpp -o Joc.o

libTabla.a: Tabla.o
	ar rcs libTabla.a Tabla.o

Tabla.o: Tabla.cpp Tabla.h
	g++ -c Tabla.cpp -o Tabla.o

# Compilare teste
test_tabla: tests/test_tabla.cpp libTabla.a
	g++ tests/test_tabla.cpp -o test_tabla -I. -L. -lTabla

test_joc: tests/test_joc.cpp libJoc.a libTabla.a
	g++ tests/test_joc.cpp -o test_joc -I. -L. -lJoc -lTabla -lsqlite3

# Rulare teste
test: test_tabla test_joc
	./test_tabla
	./test_joc

clean:
	rm -f *.o *.a X_si_0 test_tabla test_joc
