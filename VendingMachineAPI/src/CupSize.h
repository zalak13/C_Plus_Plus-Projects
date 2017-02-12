/*
 * CupSize.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef CUPSIZE_H_
#define CUPSIZE_H_

#include "Coffee.h"

class CupSize : public Coffee
{
private:
	  Coffee *coffeeInstance;
	  string size;
public:
	CupSize(Coffee *CoffeeInstance, string sz ) {
		size = sz;
		coffeeInstance = CoffeeInstance;
	}

	string getDescription(){
			return coffeeInstance->getDescription();
		}


	double cost() {
		if (size == "grande"){
				return 1.01*coffeeInstance->cost() ;
		}
		else if (size == "tall"){
			return 1.02*coffeeInstance->cost() ;
		}
		else{
			return 1.00*coffeeInstance->cost() ;
		}

	}
};


#endif /* CUPSIZE_H_ */
