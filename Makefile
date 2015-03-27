lab2: lab2.o Person.o
	g++ -o lab2 lab2.o Person.o
Person.o: Person.h Person.cpp
	g++ -c Person.cpp
lab2.o: lab2.cpp Person.h
	g++ -c lab2.cpp

clean: 
	rm lab2 *.o
