#pragma once
#include "Reptiles.h"

class Snake : public Reptiles
{
private:
	std::string name;
	//True if venomous
	bool venom;
	std::string movementType = Movement::movementType[3];

public:
	Snake(std::string snakeName, bool venomous) : Reptiles("snake", 300)
	{
		name = snakeName;
		venom = venomous;
	}

	std::string Move()
	{
		return "The " + getName() + Movement::Move(movementType);
	}

	std::string Birth()
	{
		return "The " + getName() + Reptiles::Birth();
	}

	std::string Blood()
	{
		return "They are" + Reptiles::Blood();
	}

	std::string Venomous()
	{
		if (venom)
		{
			return "The " + getName() + " is venomous.";
		}
		return "The " + getName() + " is not venomous.";
	}

	std::string getName()
	{
		return name;
	}

	void Overview()
	{
		cout << getName() + " the " + animalType + " is a " + vertebrateType + ". " << std::endl;
		cout << "- " << Blood() << "\n- " << Move() << "\n- " << Venomous() << "\n- " << Birth();
		cout << "\n\n" << std::endl;
	}
};