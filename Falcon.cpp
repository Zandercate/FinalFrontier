#include "Falcon.h"
#include <cstddef>

void Falcon::overalldamage(int guns, int cannons)
{
	Falcon *powerPtr = NULL;
	powerPtr = new Falcon;
	
	double damage;
	
	damagepergun = 25;
	numberofguns = 4;
	damagepercannon = 40;
	numberofcannons = 2;
	
	powerPtr->numberofguns;
	powerPtr->numberofcannons;

	
	damage = (guns * damagepergun) + (cannons * damagepercannon);
	
	
	setPower(damage);
	
	delete powerPtr;
	powerPtr = NULL;
	
	
}