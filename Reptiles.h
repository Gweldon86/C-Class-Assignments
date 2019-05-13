#pragma once
#include "Vertebrates.h"

class Reptiles : public Vertebrates, public BirthPolicy, public BloodTypePolicy
{
	//Birth: true = live birth, false = lays eggs
	//Blood: true = warm, false = cold
	bool birthType = false;
	bool bloodType = false;

public:
	Reptiles(std::string animal, int backbones) : Vertebrates()
	{
		animalType = animal;
		numberVertebrae = backbones;
		vertebrateType = "reptile";
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