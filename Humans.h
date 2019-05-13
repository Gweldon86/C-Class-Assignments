#pragma once
#include "Mammals.h"

//Child class for humans
class Humans : public Mammals
{
private:
	std::string name;
	int age;
	//Quick reference for movement - 0: 2 legs, 1: 4 legs, 2: wings, 3: body
	std::string movementType = Movement::movementType[0];

public:
	Humans(std::string yourName, int yourAge) : Mammals("human", 23)
	{
		name = yourName;
		age = yourAge;
	}

	std::string Move()
	{
		return "The " + animalType + Movement::Move(movementType);
	}

	std::string Birth()
	{
		return "The " + animalType + Mammals::Birth();
	}

	std::string Blood()
	{
		return "They are" + Mammals::Blood();
	}

	std::string Think()
	{
		return getName() + " tries to ponder the meaning the life, and hurts their head a little doing so.";
	}

	std::string getName()
	{
		return name;
	}

	void Overview()
	{
		cout << getName() + " the " + animalType + " is a " + vertebrateType + ". " << std::endl;
		cout << "- " << Blood() << "\n- " << Move() << "\n- " << Birth() << std::endl;
		cout << "- The " << animalType << ", " << Think() << std::endl;
		cout << "\n\n" << std::endl;
	}

};