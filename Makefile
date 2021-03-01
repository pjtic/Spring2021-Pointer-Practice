all:	Pointers.o
	g++ Pointers.o -o Pointer_Practice

main.o:	Pointers.cpp
	g++ Pointers.cpp

clean:
	rm *.o
	rm Pointer_Practice
