#pragma once
#include "Vertebrates.h"

class Mammals : public Vertebrates, public BirthPolicy, public BloodTypePolicy
{
protected:
	//Birth: true = live birth, false = lays eggs
	//Blood: true = warm, false = cold
	bool birthType = true;
	bool bloodType = true;

public:
	Mammals(std::string animal, int backbones) : Vertebrates()
	{
		animalType = animal;
		numberVertebrae = backbones;
		vertebrateType = "mammal";
	}

	std::string Birth()
	{
		return " " + BirthPolicy::Birth(birthType);
	}

	std::string Blood()
	{
		return " " + BloodType(bloodType);
	}
};
