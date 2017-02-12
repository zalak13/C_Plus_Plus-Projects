/*
 * main.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: zshah
 */


#include "main.h"

int main() {

	cFraction number1 = cFraction(10,20);
	cFraction number2 = cFraction(15,12);
	cFraction MultiplyOperation = number1*number2;
	MultiplyOperation.print();
	return 0;
}
