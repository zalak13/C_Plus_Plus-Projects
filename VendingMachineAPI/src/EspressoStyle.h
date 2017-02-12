/*
 * EspressoStyle.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef ESPRESSOSTYLE_H_
#define ESPRESSOSTYLE_H_

#include "Coffee.h"

/*
 * Inheritance classes for Style of Coffee
 */
class EspressoStyle : public Coffee
{
public:
	EspressoStyle() {
		description = "Espresso style of Coffee";
	}

	double cost() {
		return 1.25;
	}
};

#endif /* ESPRESSOSTYLE_H_ */
