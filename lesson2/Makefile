CC=clang++
CFLAGS=-c -std=c++11 

all:lesson2

lesson2: main.o person.o fruits.o
	$(CC) main.o person.o fruits.o -o lesson2

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

fruits.o: fruits.cpp
	$(CC) $(CFLAGS) fruits.cpp

person.o: person.cpp
	$(CC) $(CFLAGS) person.cpp

clean: 
	rm -rf *.o lesson2
