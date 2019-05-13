#pragma once

class BirthPolicy
{
protected:
	bool birthType;

public:
	std::string Birth(bool birthType)
	{
		if (birthType)
		{
			return "give live birth.";
		}
		
		return "lay eggs.";
	}
};