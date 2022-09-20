all:main mesg
CFLAG=release
CC=
COMP=$(if $(CC),gcc,arm-linux-gcc)
foo=a.o b.o c.o
bar=$(foo:.o=.c)
mesg:
ifeq ($(CFLAG),debug)
	@echo "debug"
else
	@echo "no debug"
endif
	@echo $(COMP)
	@echo $(bar)
	@echo $(foo)
main: main.o f1.o f2.o 
	gcc -o main main.o f1.o f2.o 
main.o: main.c def1.h 
	gcc -c main.c 
f1.o: f1.c def1.h def2.h 
	gcc -c f1.c 
f2.o: f2.c def2.h def3.h 
	gcc -c f2.c 
.PHONY:clean
clean:
	rm -f main main.o f1.o f2.o
