#include <iostream>
#include <iomanip>
#include "Falcon.h"
#include "Ship.h"
#include "Ship2.h"
using namespace std;



int gunz;
int cannonz;

int mainship()
{
	
	
	cout << "How many guns do you want for your ship? ";
	cin >> gunz;
	cout << "How many cannons do you want for your ship? ";
	cin >> cannonz;
	
	Falcon Falcon2(gunz, cannonz);
	
	cout << "Damage Per Gun: "<< Falcon2.getDamagePerGun() << endl;
	cout << "Your ship power: "<<Falcon2.getPower() << endl;
	cout << "Your ship attack class: "<<Falcon2.getAtkStar() << endl;
	return 0;	
}