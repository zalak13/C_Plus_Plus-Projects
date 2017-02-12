/*
 * DecafStyle.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef DECAFSTYLE_H_
#define DECAFSTYLE_H_

#include "Coffee.h"

/*
 * Inheritance classes for Style of Coffee
 */

class DecafStyle : public Coffee
{
public:
	DecafStyle() {
		description = "Decaf style of Coffee";
	}

	double cost() {
		return 0.99;
	}
};


#endif /* DECAFSTYLE_H_ */
