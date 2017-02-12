/*
 * main.cpp
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#include "main.h"

int bootup();
Coffee* fCupSize(Coffee* coffee);
Coffee* callForCoffee();
Coffee* fIngredients(Coffee* coffee);

int main() {
	int selection;
	while (true) {
		bootup();
		try {
			cin.clear();
			//cin.get();
			cin >> selection;
		} catch (...) {
			cout << "Please choose the integer value" << endl;
		}
		switch (selection) {
		case 1: {
			cout << "Selected Coffee" << endl;

			Coffee *coffee = callForCoffee();
			if (coffee->getDescription() != "Unknown Type of Coffee")
				cout << coffee->getDescription() + "  $" << coffee->cost()
						<< endl;
		}

			break;
		case 2:
			cout << "Selected Tea" << endl;
			cout << "Tea Selected $" << "2.99" << endl;
			//callForTea();
			break;
		case 9:
			cout << "Exiting the application" << endl;
			return 0;
		default:
			cout << "Please choose from the Options below." << endl;
			break;
		}
	}

	return 0;
}

int bootup() {
	int selection;
	cout << "************************************" << endl;
	cout << "***Coffee Vending Machine Console***" << endl;
	cout << "************************************" << endl;
	cout << "Please Choose from the below options" << endl;
	cout << "1.Coffee." << endl;
	cout << "2.Tea." << endl;
	cout << "9.Exit. #You can choose '9' anytime,"
			" you want to exit the code" << endl;
	return 0;
}

Coffee* callForCoffee() {
	int selection;

	cout << "What Style of a Coffee" << endl;
	cout << "1.Espresso." << endl;
	cout << "2.Decaf." << endl;
	cout << "3.FrenchRoast" << endl;
	cout << "0.Exit" << endl;
	cin.clear();
	cin.get();
	cin >> selection;
	switch (selection) {
	case 1: {
		cout << "Selected Espresso Coffee" << endl;
		Coffee *coffeeInst = new EspressoStyle();
		coffeeInst = fCupSize(coffeeInst);
		return coffeeInst;
	}
		break;
	case 2: {
		cout << "Selected Decaf Coffee" << endl;
		Coffee *coffeeInst = new DecafStyle();
		coffeeInst = fCupSize(coffeeInst);
		coffeeInst = fIngredients(coffeeInst);
		return coffeeInst;
	}
		break;
	case 3: {
		cout << "FrenchRoast" << endl;
		Coffee *coffeeInst = new FrenchRoastStyle();
		coffeeInst = fCupSize(coffeeInst);
		coffeeInst = fIngredients(coffeeInst);
		return coffeeInst;
	}
		break;
	case 0: {
		cout << "Exiting the selection" << endl;
		Coffee *coffeeInst = new DefaultStyle();
		return coffeeInst;
	}

		break;
	default:
		cout << "Please choose from the Options." << endl;
		break;
	}
	return new DefaultStyle();
}

Coffee* fCupSize(Coffee* coffee) {
	int select;
	cout << "Please select the cup size:" << endl;
	cout << "1.Tall" << endl;
	cout << "2.Grande" << endl;
	cout << "3.Short" << endl;
	cin >> select;
	if (select == 1) {
		coffee = new CupSize(coffee, "tall");
	} else if (select == 2) {
		coffee = new CupSize(coffee, "grande");
	} else {
		coffee = new CupSize(coffee, "short");
	}
	return coffee;
}

Coffee* fIngredients(Coffee* coffee) {
	int select;
	while (true) {
		cout << "Do you need any Ingredients:" << endl;
		cout << "1.Cream" << endl;
		cout << "2.Milk" << endl;
		cout << "3.Sugar" << endl;
		cout << "4.Done" << endl;
		cin.clear();
		cin.get();
		cin >> select;
		if (select == 1) {
			coffee = new CreamDecorator(coffee);
		} else if (select == 2) {
			coffee = new MilkDecorator(coffee);
		} else if (select == 3) {
			coffee = new SugarDecorator(coffee);
		} else
			return coffee;
	}
	return coffee;
}
