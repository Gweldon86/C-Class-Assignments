#pragma once
#include <array>

class Movement
{
protected:
	const std::array<std::string, 4> movementType = { "2 legs.", "4 legs.", "wings.", "body." };

public:
	std::string Move(std::string movementType)
	{
		return " move with their " + movementType;
	}
};