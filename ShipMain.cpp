#include <iostream>
#include "Ship.h"
#include "Ship2.h"
using namespace std;

int ship()
{
	double atkstr;
	double defstr;
	
	Ship falcon;
	Ship2 falcon2;
	
	cout << "Enter the attack strength of your Ship: ";
	cin >> atkstr;
	
	cout << "Enter the shield strength of your Ship: ";
	cin >> defstr;
	
	falcon.setPower(atkstr);
	falcon2.setPower2(defstr);
	
	cout << "The attack star level for your ship is " <<falcon.getAtkStar() << endl;
	cout << "The defense star level for your ship is " <<falcon2.getDefStar() << endl;
	return 0;
}
