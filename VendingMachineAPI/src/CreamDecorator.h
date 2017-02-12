/*
 * CreamDecorator.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef CREAMDECORATOR_H_
#define CREAMDECORATOR_H_
#include "IngredientWrapper.h"

class CreamDecorator : public IngredientWrapper
{
  public:

	CreamDecorator( Coffee *coffee) : IngredientWrapper(coffee) {}    // Pass the Coffee Object we are wrapping Ingredients to Cream decorator

	std::string getDescription()
	{
		return IngredientWrapper::getDescription() + ", Cream Added ";
	}

	double cost()
	{
		return ( 0.25 + IngredientWrapper::cost() );			// First make a call to the object we're decorating
	}															// (Coffee) then add the cost of decorator (Cream)
};


#endif /* CREAMDECORATOR_H_ */
