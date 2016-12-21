#ifndef SHIP2_H
#define SHIP2_H

class Ship2
{
	private: 
		double defpower;
	public:
		Ship2()
		{defpower = 5;}
		
		Ship2(double b)
		{defpower = b;}

		void setPower2(double b)
		{defpower = b;}
		
		double getPower2() const
		{return defpower;}
		
		char getDefStar() const;	
};
#endif
		
