#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o
	g++ -g -std=c++11 -Wall -o prog main.o Test.o LinkedListOfInts.o

main.o: main.cpp Test.h
	g++ -g -std=c++11 -Wall -c main.cpp

Test.o: Test.h Test.cpp
	g++ -g -std=c++11 -Wall -c Test.cpp


#Add needed Test.o recipe and compiler command


#DON'T delete LinkedList.o!
clean:
	rm main.o Test.o *.*~ prog
