#pragma once
#include "Mammals.h"

class Platypus : public Mammals
{
private:
	std::string name;
	bool isOddLooking = true;
	bool birthType = false;
	//Quick reference for movement - 0: 2 legs, 1: 4 legs, 2: wings, 3: body
	std::string movementType = Movement::movementType[1];

public:
	Platypus(std::string yourName) : Mammals("platypus", 33)
	{
		name = yourName;
	}

	std::string Move()
	{
		return "The " + getName() + Movement::Move(movementType);
	}

	//Overriding general birth policy due to how strange platypi are.
	std::string Birth()
	{
		return "The " + animalType + " actually " + BirthPolicy::Birth(birthType) + " Despite being a " + vertebrateType;
	}

	std::string Blood()
	{
		return "They are" + Mammals::Blood();
	}

	
	std::string IsAWeirdAnimal()
	{
		if (isOddLooking)
		{
			return getName() + " the " + animalType + " is a strange mammal.";
		}
	}

	std::string getName()
	{
		return name;
	}

	void Overview()
	{
		cout << getName() + " the " + animalType + " is a " + vertebrateType + ". " << std::endl;
		cout << "- " << Blood() << "\n- " << Move() << "\n- " << Birth();
		cout << "\n\n" << std::endl;
	}
};