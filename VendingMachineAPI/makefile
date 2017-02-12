all: VendingMachineAPI.exe
  
clean:
	rm main.o VendingMachineAPI.exe
  
VendingMachineAPI.exe: main.o
	g++ -g -o VendingMachineAPI.exe main.o
  
main.o: src/main.cpp src/main.h src/main.h src/Coffee.h src/CreamDecorator.h src/CupSize.h src/DecafStyle.h src/DefaultStyle.h src/EspressoStyle.h src/FrenchRoastStyle.h src/IngredientWrapper.h src/MilkDecorator.h src/SugarDecorator.h
	g++ -c -g src/main.cpp 