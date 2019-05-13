#pragma once
#include <string>

class BloodTypePolicy
{
protected:
	bool bloodType;

public:
	std::string BloodType(bool bloodType)
	{
		if(bloodType)
		{
			return "warm blooded.";
		}

		return "cold blooded.";
	}
};