/*
 * IngredientWrapper.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 *      Info: This a Decoration Interface written to enhance the property of the coffee on the runtime.
 *      This will extend the possibility to have a different behavior and update the cost of the product
 *      based on the ingredients added to the coffee.
 */

#ifndef INGREDIENTWRAPPER_H_
#define INGREDIENTWRAPPER_H_
#include "Coffee.h"

class IngredientWrapper: public Coffee
{
private:
	Coffee *coffeeInstance;
public:
	IngredientWrapper(Coffee *coffeeReference){
		coffeeInstance = coffeeReference;
	}

	string getDescription(){
		return coffeeInstance->getDescription();
	}

	double cost(){
		return coffeeInstance->cost();
	}
};

#endif /* INGREDIENTWRAPPER_H_ */
