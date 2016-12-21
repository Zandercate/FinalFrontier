#ifndef FALCON_H
#define FALCON_H
#include "Ship.h"

class Falcon : public Ship
{
	private:
		int numberofguns;
		double damagepergun;
		int numberofcannons;
		double damagepercannon;
	public: 
		Falcon()
		{
			numberofguns = 4;
			damagepergun = 5;
			numberofcannons = 2;
			damagepercannon = 10;
					
		}
		
		Falcon(int guns, int cannons)
		{
			overalldamage(guns, cannons);
		}
		
		void overalldamage(int, int);
		
		int getNumberofGuns() const
		{
			return numberofguns;
		}
		
		double getDamagePerGun() const
		{
			return damagepergun;
		}
		int getNumberofCannons() const
		{
			return numberofcannons;
		}
		
		double getDamagePerCannon() const
		{
			return damagepercannon;
		}
		
		
};
#endif