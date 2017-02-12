all: FractionClass.exe
  
clean:
	-del  main.o FractionClass.exe
  
FractionClass.exe: main.o
	g++ -g -o FractionClass.exe main.o
  
main.o: src/main.cpp src/main.h src/cFraction.h src/cFraction.cpp
	g++ -Wall -c -g src/main.cpp 