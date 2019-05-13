#pragma once
#include "Movement.h"
#include "BirthPolicy.h"
#include "BloodTypePolicy.h"
#include <iostream>

using std::cout;

//Defining a class of vertebrates
class Vertebrates : public Movement
{
protected:
	std::string animalType;
	int numberVertebrae;
	std::string vertebrateType;

public:
	Vertebrates()
	{
		
	}

	virtual std::string Move()
	{
		//Implement move methods for each animal.
		return "If you see this message, implement move method.";
	}

	int getVertebrae()
	{
		return numberVertebrae;
	}

	std::string getAnimalType()
	{
		return animalType;
	}

	virtual void Overview()
	{
		//Implement an overview for each animal.
	}
};