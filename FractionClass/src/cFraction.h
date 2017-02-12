/*
 * cFraction.h
 *
 *  Created on: Dec 21, 2016
 *      Author: zshah
 */

#ifndef CFRACTION_H_
#define CFRACTION_H_

#include <iostream>
#include <string>

using namespace std;

class cFraction {
public:
	//addition, subtraction, multiplication, division, equality/non-equality, greater than/less than, and display.

	// Constructors
	cFraction();
	cFraction(int inputNumerator);
	cFraction(int inputNumerator, int inputDenominator);

	// Arithmetic operators
	cFraction& operator+=(const cFraction& rhs);
	cFraction& operator*=(const cFraction& rhs);
	cFraction& operator/=(const cFraction& rhs);
	cFraction operator-();
	cFraction operator+();

	// A few comparisons
	friend bool operator<(const cFraction& lhs, const cFraction& rhs);
	friend bool operator==(const cFraction& lhs, const cFraction& rhs);

	// operator() can have 0, 1, 2, etc., arguments
	void operator()();
	int operator()(int, int);
	int operator()(int, int, const string&, double);

	void print();
private:
	int numerator;
	int denominator;
	void Reduce();

};

// non-member arithmetic
cFraction operator+(cFraction lhs, const cFraction& rhs);
cFraction operator*(cFraction lhs, const cFraction& rhs);
cFraction operator/(cFraction lhs, const cFraction& rhs);
bool operator!=(const cFraction& lhs, const cFraction& rhs);
bool operator<=(const cFraction& lhs, const cFraction& rhs);
bool operator>=(const cFraction& lhs, const cFraction& rhs);
bool operator>(const cFraction& lhs, const cFraction& rhs);





#endif /* CFRACTION_H_ */
