/*
 * MilkDecorator.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef MILKDECORATOR_H_
#define MILKDECORATOR_H_
#include "IngredientWrapper.h"

class MilkDecorator : public IngredientWrapper
{
  public:

	MilkDecorator( Coffee *coffee) : IngredientWrapper(coffee) {}    // Pass the Coffee Object we are wrapping Ingredients to Milk decorator

	std::string getDescription()
	{
		return IngredientWrapper::getDescription() + ", Milk Added ";
	}

	double cost()
	{
		return ( 0.30 + IngredientWrapper::cost() );			// First make a call to the object we're decorating
	}															// (Coffee) then add the cost of decorator (Milk)
};


#endif /* MILKDECORATOR_H_ */
