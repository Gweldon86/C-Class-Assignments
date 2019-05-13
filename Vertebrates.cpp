#include "Animals.h"


int main()
{
	Platypus Knuckles = Platypus("Knuckles");
	Snake Python = Snake("Python", false);
	Humans Gregory = Humans("Gregory", 32);

	Knuckles.Overview();	
	Python.Overview();
	Gregory.Overview();
}