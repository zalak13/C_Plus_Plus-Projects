/*
 * DefaultStyle.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef DEFAULTSTYLE_H_
#define DEFAULTSTYLE_H_

#include "Coffee.h"

/*
 * Inheritance classes for Style of Coffee
 */

class DefaultStyle : public Coffee
{
public:
	DefaultStyle() {
		description = "No selection of Coffee";
	}

	double cost() {
		return 0.00;
	}
};


#endif /* DEFAULTSTYLE_H_ */
