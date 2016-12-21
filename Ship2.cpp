#include "Ship2.h"
char Ship::getDefStar() const
{
	char defstar
	
	if ((defpower >= 0) && (defpower<100))
		defstar = 'C';
	else if ((defpower >= 100) && (defpower < 200))
		defstar = 'B';
	else
		defstar = 'A';
}