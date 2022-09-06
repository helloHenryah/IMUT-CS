main: main.o t1.o t2.o 
	gcc -o main main.o t1.o t2.o 
main.o: main.c d1.h 
	gcc -c main.c -o main.o
t1.o: t1.c d1.h d2.h 
	gcc -c t1.c -o t1.o
t2.o: t2.c d2.h d3.h 
	gcc -c t2.c -o t2.o
.PHONY:clean
clean:
	rm -f main main.o t1.o t2.o
