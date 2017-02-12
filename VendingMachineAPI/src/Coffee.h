/*
 * Coffee.h
 *
 *  Created on: Dec 5, 2016
 *      Author: zshah
 */

#ifndef COFFEE_H_
#define COFFEE_H_

#include <string>

using namespace std;

class Coffee{

protected:
	string description;
public:
	virtual double cost()=0;
	Coffee(){
		description="Unknown Type of Coffee";
	}
	virtual string getDescription(){
		return description;
	}
	virtual ~Coffee(){};
};



#endif /* COFFEE_H_ */
