#include "Ship.h"
#include "Ship2.h"

char Ship::getAtkStar() const
{
	char atkstar;
	
	if((atkpower >= 0) && (atkpower<500))
		atkstar = 'C';
	else if((atkpower >= 500) && (atkpower<1000))
		atkstar = 'B';
	else
		atkstar = 'A';
};
char Ship2::getDefStar() const
{
	char defstar;
	
	if((defpower >= 0) && (defpower<500))
		defstar = 'C';
	else if((defpower >= 500) && (defpower < 1000))
		defstar = 'B';
	else
		defstar = 'A';
};