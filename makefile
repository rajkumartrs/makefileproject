StringLength: main.o lenstring.o
	g++ main.o lenstring.o -o StringLength 

lenstring.o: lenstring.cpp functions.h
	g++ -c lenstring.cpp

main.o: main.cpp functions.h
	g++ -c main.cpp 

clean:
	rm *.o StringLength
