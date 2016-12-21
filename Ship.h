#ifndef SHIP_H
#define SHIP_H

class Ship
{
	private:
		double atkpower;
	public:
		Ship()
		{atkpower = 5;}
		
		Ship(double a)
		{atkpower = a;}
		
		void setPower(double a)
		{atkpower = a;}
		
		double getPower() const
		{return atkpower;}
		
		char getAtkStar() const;
		
};
#endif

