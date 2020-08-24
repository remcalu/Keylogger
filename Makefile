main: main.o functions.o
	gcc -ansi -Wall -o main main.o functions.o

main.o: main.c
	gcc -ansi -Wall -c main.c

functions.o: functions.c
	gcc -ansi -Wall -c functions.c

clean:
	del main main.o functions.o