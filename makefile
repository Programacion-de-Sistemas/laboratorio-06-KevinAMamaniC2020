all: main.o 
	g++ main.o $(HW).c -lglut -lGL -lGLU -w -o $(HW)
main.o: main.c
	g++ -c main.c
ejemplo.o: ejemplo.c
	g++ -c ejemplo.c