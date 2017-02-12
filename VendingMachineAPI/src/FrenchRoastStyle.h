/*
 * FrenchRoastStyle.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef FRENCHROASTSTYLE_H_
#define FRENCHROASTSTYLE_H_

#include "Coffee.h"

/*
 * Inheritance classes for Style of Coffee
 */

class FrenchRoastStyle : public Coffee
{
public:
	FrenchRoastStyle() {
		description = "French Roast style of Coffee";
	}

	double cost() {
		return 1.10;
	}
};


#endif /* FRENCHROASTSTYLE_H_ */
