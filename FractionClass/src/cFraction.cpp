/*
 * cFraction.cpp
 *
 *  Created on: Dec 21, 2016
 *      Author: zshah
 */

#include"cFraction.h"

/** Default constructor
* initializes the fraction to 0/1.
* numerator and denominator are default initialized
* THEN it runs the code inside { ... }
*/
cFraction::cFraction() {
	numerator = 0;
	denominator = 1;
}

/** Initializes fraction to input_numerator/1
	@param input_numerator this is the value of the numerator
*/
cFraction::cFraction(int input_numerator) : numerator(input_numerator), denominator(1) {

}

/** Initializes fraction to input_numerator/input_denominator
	@param input_numerator is the initial numerator
	@param input_denominator is the initial denominator
*/
cFraction::cFraction(int input_numerator, int input_denominator) : numerator(input_numerator), denominator(input_denominator) {
	Reduce();
}

/** Prints out the fraction in the form n/d */
void cFraction::print() {
	cout << numerator << "/" << denominator;
}


/** ... */
cFraction& cFraction::operator+=(const cFraction& rhs) {
	// a/b + c/d = (a*d+b*c) / (b*d)
	int a = numerator;
	int b = denominator;
	int c = rhs.numerator;
	int d = rhs.denominator;

	numerator = (a*d+b*c);
	denominator = (b*d);

	Reduce();
	return *this;
}


/** ...
..
..
*/
cFraction& cFraction::operator*=(const cFraction& rhs) {
	// a/b * c/d = (a*c) / (b*d)
	int a = numerator;
	int b = denominator;
	int c = rhs.numerator;
	int d = rhs.denominator;

	numerator   = (a*c);
	denominator = (b*d);

	Reduce();
	return *this;
}


/** ...
..
..
*/
cFraction& cFraction::operator/=(const cFraction& rhs) {
	// a/b / c/d = (a*d) / (b*c)
	int a = numerator;
	int b = denominator;
	int c = rhs.numerator;
	int d = rhs.denominator;

	numerator   = (a*d);
	denominator = (b*c);

	Reduce();
	return *this;
}


/** performs lhs+rhs fraction arithmetic
	@param lhs is the left hand side of the addition
	@param rhs is the right hand side of the addition
	@returns the value of lhs+rhs.
*/
cFraction operator+(cFraction lhs, const cFraction& rhs) { return lhs+=rhs; }

/** ... */
cFraction operator*(cFraction lhs, const cFraction& rhs) {
	return lhs*=rhs;
}

/** ... */
cFraction operator/(cFraction lhs, const cFraction& rhs) {
	return lhs/=rhs;
}


/** ... */
cFraction cFraction::operator-() {
	cFraction negation( -numerator, denominator);

	// This operation preserves reduced form.  No need to call Reduce().
	return negation;
}

/** Called using Fraction p;   +p; */
cFraction cFraction::operator+() {
	cFraction copy(*this);
	return copy;
}


/** ... */
bool operator<(const cFraction& lhs, const cFraction& rhs) {
	// a/b < c/d ?
	// First approach: convert to doubles
	//double left = static_cast<double>(lhs.numerator)/lhs.denominator;
	//double right = static_cast<double>(rhs.numerator)/rhs.denominator;

	// Second approach: assume denominators are always > 0.
	// return a*d < b*c
	int a = lhs.numerator;
	int b = lhs.denominator;
	int c = rhs.numerator;
	int d = rhs.denominator;


	return a*d < b*c;
}

/** ... */
bool operator==(const cFraction& lhs, const cFraction& rhs) {
	// a/b = c/d

	// First approach: Cross multiply
	// a*d = b*c
	//return ( lhs.numerator*rhs.denominator == lhs.denominator*rhs.numerator);

	// Second approach: assume fractions are in reduced form, compare numerators
	// and denominators directly.
	return ( lhs.numerator == rhs.numerator && rhs.denominator == lhs.denominator);

}

/** ... */
bool operator!=(const cFraction& lhs, const cFraction& rhs) {
	return !(lhs==rhs);
}

/** ... */
bool operator<=(const cFraction& lhs, const cFraction& rhs) {
	return (lhs < rhs) || (lhs == rhs);
}

/** ... */
bool operator>=(const cFraction& lhs, const cFraction& rhs) {
	return !(lhs<rhs);
}

/** ... */
bool operator>(const cFraction& lhs, const cFraction& rhs) {
	// Exercise...think about this one.
	return true;
}



/** Calculates the greatest common divisor of integers a and b.
	@param a is one of the values
	@param b is the second value
	@return gcd(a,b)
*/
int gcd(int a, int b) {

	int t = 0;

	// loop until reduction is finished
	while (b != 0) {
       t = b;
       b = a % b;
       a = t;
	}
    return a;
}


/** This reduces the fraction to lowest terms: \n
	1.  5/5  --> 1/1
	2.  0/a  --> 0/1  (assuming a != 0)
	3.  0/0  --> Error?
	4.  2/4  --> 1/2
	5.  -3/-5--> 3/5
	6.  2/-7 --> -2/7
	7.  a/0  --> Error?
*/
void cFraction::Reduce() {

	// GCD algorithm:
	int division_factor = gcd(numerator,denominator);

	// e.g., 15/5, division_factor = 5;
	// Now divide numeratror and denominator by division_factor

	numerator /= division_factor;
	denominator /= division_factor;


	// a/b, -a/b, a/-b, -a/-b

	// a/-b  OR  -a/-b
//	if( (numerator >0 && denominator<0) || (numerator<0 && denominator < 0) ) {
	// Equivalent to
	if( denominator<0 ) {
		//numerator =- numerator; // not recommended, possible confusion with -=
		numerator *= -1;
		denominator *= -1;
	}


//	cout << numerator << "/"<<denominator<<endl;

}


int cFraction::operator()(int a, int b, const string& message, double d) {

	cout << a << "/"<<b<<endl;
	cout<<d<<endl;

	return static_cast<int>(d);
}

