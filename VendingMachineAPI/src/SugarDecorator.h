/*
 * SugarDecorator.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef SUGARDECORATOR_H_
#define SUGARDECORATOR_H_
#include "IngredientWrapper.h"

class SugarDecorator : public IngredientWrapper
{
  public:

	SugarDecorator( Coffee *coffee) : IngredientWrapper(coffee) {}    // Pass the Coffee Object we are wrapping Ingredients to Sugar decorator

	std::string getDescription()
	{
		return IngredientWrapper::getDescription() + ", Sugar Added ";
	}

	double cost()
	{
		return ( 0.15 + IngredientWrapper::cost() );			// First make a call to the object we're decorating
	}															// (Coffee) then add the cost of decorator (Sugar)
};


#endif /* SUGARDECORATOR_H_ */
