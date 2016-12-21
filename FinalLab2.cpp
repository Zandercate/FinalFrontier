#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Falcon.h"
#include "Ship.h"
#include "Ship2.h"

using namespace std;


string travel1;
string travel2;
string travel3;
string travel4;
string engagepilot;
string evadestay;
string heros;
string engageGalaxy;
string engagerun;
string evaderun;
string powerup;
string engage;
string savecode;

//enemies structs
struct Enemy
{
	string Name;
	string planetName;
	string shipName;
	int health;
	int power;
};

//player structs and stats
struct player
{
	string name;
	string planetName;
	string shipName;
};

struct playerstats
{
	int health;
	int strength;
	int attackpower;
};

int randomz(int upperlevel, int lowerlevel)
{
	int value;
	value = (rand() % upperlevel) + lowerlevel;	
	return value;
}
//beginining of main statement
int main()
{

	

cout << "		    Alexander Cate \n";
cout << "		      Presents \n";
cout << "									\n";							
cout << "		  THE FINAL FRONTIER\n";
cout << "											\n";
cout << "										\n";
cout << "                           *     .--. \n";
cout << "                                / /  ` \n";
cout << "               +               | |\n";
cout << "                      '         \\ \\__, \n";
cout << "                  *          +   '--'  *\n";
cout << "                      +   /\\ \n";
cout << "         +              .'  '.   *\n";
cout << "                       /======\\     +\n";
cout << "                      ;:.  _   ; \n";
cout << "                      |:. (_)  | \n";
cout << "                      |:.  _   | \n";
cout << "            +         |:. (_)  |          *\n";
cout << "                      ;:.      ; \n";
cout << "                    .'\\:.    / `. \n";
cout << "                   / .-'':._.'`-. \\ \n";
cout << "                   |/    /||\\   \\| \n";
cout << "                 _..--1111111111--.._\n"; 
cout << "           _.-'``                    ``'-. \n";
cout << "         -'                                '- \n";
cout << "	 Press enter to begin your adventure...\n";	
cout << "												http://textart.io/art/tag/spaceship/1 \n";


cin.ignore();
cout << string(50, '\n');

player player1;

cout << "Enter your name: \n";
getline(cin, player1.name);
cout << "Welcome to The Final Frontier: " << player1.name << "!\n";

cout << string(50, '\n');
cout << "Please enter your ship name: \n";
getline(cin, player1.shipName);

cout << string(50, '\n');
cout << "Please enter your home planet: \n";
getline(cin, player1.planetName);


cout << "Here is a quick look at your player profile\n";
cout << player1.name << endl;
cout << player1.shipName<< endl;
cout << player1.planetName << endl;
cout << "Press enter to continue...\n";
cin.ignore();
cout << string(50, '\n');

playerstats player2;
player2.health = 250;
cout << "Lets fill in some more information\n";
cout << player1.name << ", please enter the strength of your character, 1-100: \n";
cin >> player2.strength;
cin.ignore();
if(player2.strength <= 100)
	{
		cout << player1.name << ", the health of your ship is currently: " << player2.health << endl;
	}
else if(player2.strength > 100)
	{
		cout << "Welcome to Hard Mode, press enter to continue.\n";
		cin.ignore();
		cout << string(50, '\n');
		cout << "Your health will be limited to: 100\n";
		player2.health = 100;
		cout << "Your save code will be 9999\n";
		cout << "and your enemies damage will be completely randomized, good luck.\n";
	}

//ship gun power

	int gunz;
	int cannonz;
	
	cout << "How many guns do you want for your ship? (Limit 8): ";
	cin >> gunz;
	cout << "How many cannons do you want for your ship? (Limit 6): ";
	cin >> cannonz;
	cin.ignore();
	Falcon Falcon2(gunz, cannonz);
	
	cout << "Damage Per Gun: "<< Falcon2.getDamagePerGun() << endl;
	cout << "Your ship power: "<<Falcon2.getPower() << endl;
	
cin.ignore();
cout << string(50, '\n');

cout << "Your journey is to Narku-7. Along the way, you will encounter various obstacles. Many will try to stop you from reaching Narku-7. \n";
cout << "Your personal assistant, Merv, is here to guide you along the way. Good luck, and we will see you on Narku-7!\n";
cout << "Press enter to begin The Final Frontier!\n";

cin.ignore();
cout << string(50, '\n');

	if (player1.planetName == "Earth")
	{
		cout << "Greatings " <<player1.name<< ". I am your personal assistant, Merv. Are you ready to leave Earth?\n";
		cin >> travel1;
		if (travel1 == "Yes")
		{
			cout<< "Good, lets get going then.\n";
		}
		else
		{
			cout << "Alright, just type 'Ready' when you are finished.\n";
			cin >> travel2;
			if (travel2 == "Ready")
				cout << "Ok, hold on tight!\n";
		}
	}
	else 
	{
		cout << "Greatings " <<player1.name<< ". I am your personal assistant, Merv. Are you ready to leave?\n";
		cin >> travel3;
		if (travel3 == "Yes")
		{
			cout<< "Good, lets get going then.\n";
		}
		else
		{
			cout << "Alright, just type 'Ready' when you are finished.\n";
			cin >>travel4;
			if (travel4 == "Ready")
				cout << "Ok, hold on tight!\n";
			
		}
		
	}
cout << "											\n";
cout << "										\n";
cout << "                           *     .--. \n";
cout << "                                / /  ` \n";
cout << "               +               | |\n";
cout << "                      '         \\ \\__, \n";
cout << "                  *          +   '--'  *\n";
cout << "                      +   /\\ \n";
cout << "         +              .'  '.   *\n";
cout << "                       /======\\     +\n";
cout << "                      ;:.  _   ; \n";
cout << "                      |:. (_)  | \n";
cout << "                      |:.  _   | \n";
cout << "            +         |:. (_)  |          *\n";
cout << "                      ;:.      ; \n";
cout << "                    .'\\:.    / `. \n";
cout << "                   / .-'':._.'`-. \\ \n";
cout << "                   |/    /||\\   \\| \n";
cout << "                        /||||\\    \n";
cout << "                       /||||||\\ \n";
cout << "                      /||||||||\\ \n";
cout << "                     /||||||||||\\ \n";
cout << "                    /||||||||||||\\ \n";
cout << "												\n";
cout << "							 					\n";
cout << "							 					\n";
cout << "												\n";
cout << "							 					\n";
cout << "							 					\n";
cout << "                 ..--11111111111--.._\n"; 
cout << "           _.-'``                    ``'-. \n";
cout << "         -'                                '- \n";
cin.ignore();
cin.ignore();
cout << string(50, '\n');

cout << "If you have a save code, please enter it now, if not type '0000'.\n";
cin >> savecode;
//first savepoint
if(savecode =="1234")
{
	cannonz = cannonz + 1;
Falcon Level2(gunz, cannonz);
player2.health = 350;

cout << "Your updated stats are:\n";
cout << "Damage Per Gun: "<< Level2.getDamagePerGun() << endl;
cout << "Your ship power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(50, '\n');


// second enemy here
cout << "You travel farther and farther into the unknown, Merv tells you you are\n";
cout << "200 light years away from Narku-7, so very close and yet so far.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(50, '\n');

cout << "Sir, an even larger attack ship is coming right for us!\n";
cin.ignore();
cout << string(50, '\n');

Enemy GalaxyEater;
GalaxyEater.Name = "Homer";
GalaxyEater.planetName = "Lort";
GalaxyEater.shipName = "Galaxy Eater";
GalaxyEater.power = Falcon2.getPower() * .7;
GalaxyEater.health = GalaxyEater.power + 100;

cout << "Name of Enemy: "<< GalaxyEater.Name << endl;
cout << "Planet of Origin: " <<GalaxyEater.planetName << endl;
cout << "Name of Ship: " << GalaxyEater.shipName << endl;
cout << "Enemy ship strength: " << GalaxyEater.power << endl;
cout << "Enemy ship health: " << GalaxyEater.health << endl;

cin.ignore();
cout << "Engage?								Run?\n";
cin >> engagerun;
while(engagerun == "Run" && player2.health > 0)
	{	
		int healthEngagerun;
		cout << "Sir I believe running is not the answer to our problems, I recommend you engage!\n";
		cout << "Engage?								Run?\n";
		cin >> engagerun;
		cout << "Sir, we have been hit!\n";
		if(engagerun == "Run")
			{
				healthEngagerun = player2.health - (GalaxyEater.power * randomz(7, 3) * .1);
				player2.health = healthEngagerun;
				cout << "Current " <<player1.shipName<< " health: "<< healthEngagerun<< endl;
		
			}
	}	
if (player2.health <= 0)
{
cout << "You have been killed by: Galaxy Eater!\n";
cout << "      ________\n";
cout << "      `---.     `.\n";
cout << "           \\      `.\n";
cout << "            )_______`. \n";   
cout << "        .'        //`---...___\n";
cout << "       /         ||    // ||  `-._\n";
cout << "    )`-|   =//=  ||   ||  ||  / ).`.\n";
cout << "    ).-|         ||   ||  `........'`-._   (o)\n";
cout << "   _...'.....__  ||   ||  _____      ||-\\__.'\n";
cout << "  /_______..--'  ||   ||  -----    _ ||_/\n";
cout << "  `-------'      ||   ||   =\\\\=    \\_.'\n";
cout << "    )`-|         ||   ||       _..-'\n";
cout << "     ).-| =\\=    ||    \\  _.-' || \n";
cout << "   __==\\         \\   _.-'    /o\n";
cout << "           \\     .'\n";
cout << "           /    /\n";
cout << "      ___.'    /\n";
cout << "      `-------'\n";
}

while(engagerun == "Engage" && GalaxyEater.health > 0)
{
	cout << "Direct Hit!\n";
	GalaxyEater.health = GalaxyEater.health - Falcon2.getPower() * .25;
	cout << "Current health of Galaxy Eater: "<< GalaxyEater.health << endl;
	if(GalaxyEater.health > 0)
		{
			cout << "The ship is preparing to engage again, would you like to take evasive maneuvers?\n";
			cout << "Evade?								Run?\n";
			cin >> evaderun;
		}
	while(evaderun == "Run" && player2.health > 0 && GalaxyEater.health > 0)
	{
		cout << "Sir, you really are something else...\n";
		player2.health = player2.health - (GalaxyEater.power * .5);
		cout << "Current Health: " << player2.health << endl;
		cout << "Evade?								Run?\n";
		cin >> evaderun;
	}

}


if(player2.health > 0)
{
cin.ignore();
cout << string(50, '\n');
cout << "Great shot! The enemy has been destroyed!\n";
cout << "You have defeated: Galaxy Eater! Your save code is 4321\n";
cout << "The ship is currently being repaired, and you have gained 50 extra health points!";
cout << "You also gained 2 extra guns!\n";
cin.ignore();
cout << string(50, '\n');
gunz = gunz + 2;
Falcon Level2(gunz, cannonz);
player2.health = 450;

cout << "Your updated stats are:\n";
cout << "Damage Per Gun: "<< Level2.getDamagePerGun() << endl;
cout << "Your ship power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(50, '\n');

//Final boss!
if(player2.health > 0)
{

cout << "You have entered Narku-7 airspace.\n";
cout << "Only a few more minutes until you have completed your quest.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(50, '\n');

cout << "Hello " << player1.name << "..." <<endl;
cin.ignore();
cout << string(50, '\n');

int size = player1.name.length();
	while (size >= 0) 
	{
		size = size-1;
	}

Enemy AntiPlayer;
AntiPlayer.Name = "???";
AntiPlayer.planetName = player1.planetName;
AntiPlayer.shipName = player1.shipName;
AntiPlayer.power = Falcon2.getPower() * 1;
AntiPlayer.health = player2.health + randomz(200, 100);

cout << "Name of Enemy: "<< AntiPlayer.Name << endl;
cout << "Planet of Origin: " <<AntiPlayer.planetName << endl;
cout << "Name of Ship: " << AntiPlayer.shipName << endl;
cout << "Enemy ship strength: " << AntiPlayer.power << endl;
cout << "Enemy ship health: " << AntiPlayer.health << endl;
cin.ignore();
cout << string(50, '\n');


cin.ignore();
cout << "Sir, there is no turning back now\n";
cout << "Engage?\n";
cin >> engage;

while(engage == "Engage" && AntiPlayer.health > 0 && player2.health > 0)
{
	if(player2.health < 100)
	{
		cout << "Sir, I found some repairs!\n";
		player2.health = player2.health + 100;
		cout << "Health upgraded to: " << player2.health << endl;
	}
	cout << "Direct Hit!\n";
	AntiPlayer.health = AntiPlayer.health - Falcon2.getPower() * (randomz(9, 4) * .1);
	if (AntiPlayer.health <= 0)
		{
			cout << "FINISH HIM!\n";
			cout << "Finish?\n";
			cin >> engage;
		}
	cout << "Current health of Anti " << player1.name << ": "<< AntiPlayer.health << endl;

	if(AntiPlayer.health > 0)
		{
			cout << "The ship is preparing to engage again, brace for impact\n";
			player2.health = player2.health - (AntiPlayer.power * randomz(10, 1) * .1);
		}
	cout << "Current health: "<<player2.health << endl;
	cout << "Engage?\n";
	cin >> engage;

}
if(player2.health <= 0)
{
	cout << "You have been killed by: Anti "<<player1.name << endl;
}
else if(AntiPlayer.health <= 0)
{
	cout << "Congratulations! You have completed THE FINAL FRONTIER!\n";
	cout << "You will be enshrined in the Wall of Heros for all future players to see!";
	
}

}
	
	}
		
cout << "Thank you for playing THE FINAL FRONTIER!\n";
}

//savepoint2
else if(savecode == "4321")
{
	cout << "The ship is currently being repaired, and you have gained 50 extra health points!";
cout << "You also gained 2 extra guns!\n";
cin.ignore();
cout << string(50, '\n');
gunz = gunz + 2;
Falcon Level2(gunz, cannonz);
player2.health = 450;

cout << "Your updated stats are:\n";
cout << "Damage Per Gun: "<< Level2.getDamagePerGun() << endl;
cout << "Your ship power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(50, '\n');

//Final boss!
if(player2.health > 0)
{

cout << "You have entered Narku-7 airspace.\n";
cout << "Only a few more minutes until you have completed your quest.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(50, '\n');

cout << "Hello " << player1.name << "..." <<endl;
cin.ignore();
cout << string(50, '\n');

int size = player1.name.length();
	while (size >= 0) 
	{
		size = size-1;
	}

Enemy AntiPlayer;
AntiPlayer.Name = "???";
AntiPlayer.planetName = player1.planetName;
AntiPlayer.shipName = player1.shipName;
AntiPlayer.power = Falcon2.getPower();
AntiPlayer.health = player2.health + randomz(200, 100);
	
cout << "Name of Enemy: "<< AntiPlayer.Name << endl;
cout << "Planet of Origin: " <<AntiPlayer.planetName << endl;
cout << "Name of Ship: " << AntiPlayer.shipName << endl;
cout << "Enemy ship strength: " << AntiPlayer.power << endl;
cout << "Enemy ship health: " << AntiPlayer.health << endl;
cin.ignore();
cout << string(50, '\n');


cin.ignore();
cout << "Sir, there is no turning back now\n";
cout << "Engage?\n";
cin >> engage;

while(engage == "Engage" && AntiPlayer.health > 0 && player2.health > 0)
{
	if(player2.health < 100)
	{
		cout << "Sir, I found some repairs!\n";
		player2.health = player2.health + 100;
		cout << "Health upgraded to: " << player2.health << endl;
	}
	cout << "Direct Hit!\n";
	AntiPlayer.health = AntiPlayer.health - (Falcon2.getPower() * (randomz(9, 4)* .1));
	if (AntiPlayer.health <= 0)
		{
			cout << "FINISH HIM!\n";
			cout << "Finish?\n";
			cin >> engage;
		}
	cout << "Current health of Anti " << player1.name << ": "<< AntiPlayer.health << endl;

	if(AntiPlayer.health > 0)
		{
			cout << "The ship is preparing to engage again, brace for impact\n";
			player2.health = player2.health - (AntiPlayer.power * randomz(10, 1) * .1);
		}
	cout << " Current health: " << player2.health << endl;
	cout << "Engage?\n";
	cin >> engage;
	

}
if(player2.health <= 0)
{
	cout << "You have been killed by: Anti "<<player1.name << endl;
}
else if(AntiPlayer.health <= 0)
{
	cout << "Congratulations! You have completed THE FINAL FRONTIER!\n";
	cout << "You will be enshrined in the Wall of Heros for all future players to see!";
	
}

}

cout << "Thank you for playing THE FINAL FRONTIER!\n";
}

//main code without savepoints
else 
{
cout << "You awaken from a cryosleep to the sounds of alarms and failures in the cockpit...\n";
cout << "Sir! Left engine 4 is down and we are leaking fuel! We are under attack!\n";
cout << "Here is the information on the attacking ship: \n";



Enemy StarDestroyer;
StarDestroyer.Name = "Lrrr";
StarDestroyer.planetName = "Omicron Persei 8";
StarDestroyer.shipName = "Star Destroyer";
StarDestroyer.power = Falcon2.getPower() * .5;
StarDestroyer.health = StarDestroyer.power + randomz(200, 100);
if(player2.strength > 100)
	{
		StarDestroyer.power = Falcon2.getPower() * randomz(5, 1) * .1;
	}
cout << "Name of Enemy: "<< StarDestroyer.Name << endl;
cout << "Planet of Origin: " <<StarDestroyer.planetName << endl;
cout << "Name of Ship: " << StarDestroyer.shipName << endl;
cout << "Enemy ship strength: " << StarDestroyer.power << endl;
cout << "Enemy ship health: " << StarDestroyer.health << endl;



cin.ignore();
cout << "Do you wish to engage, or do you have enough faith in your engines to continue? \n";
cout << "Engage?								Pilot?\n";
cin >> engagepilot;
while(engagepilot == "Pilot" && player2.health > 0)
	{	
		int healthEngagepilot;
		cout << "Sir I believe this is not the answer to our problems, I recommend you engage!\n";
		cout << "Engage?								Pilot?\n";
		cin >> engagepilot;
		cout << "Sir, we have been hit again!\n";
		if(engagepilot == "Pilot")
			{
				healthEngagepilot = player2.health * randomz(4, 1) * .1;
				player2.health = healthEngagepilot;
				cout << "Current " <<player1.shipName<< " health: "<< healthEngagepilot << endl;
		
			}
		cout << "Engage?								Pilot?\n";
		cin >> engagepilot;
	}	
if (player2.health <= 0)
{
cout << "You have been killed by: Star Destroyer!\n";
cout << "      ________\n";
cout << "      `---.     `.\n";
cout << "           \\      `.\n";
cout << "            )_______`. \n";   
cout << "        .'        //`---...___\n";
cout << "       /         ||    // ||  `-._\n";
cout << "    )`-|   =//=  ||   ||  ||  / ).`.\n";
cout << "    ).-|         ||   ||  `........'`-._   (o)\n";
cout << "   _...'.....__  ||   ||  _____      ||-\\__.'\n";
cout << "  /_______..--'  ||   ||  -----    _ ||_/\n";
cout << "  `-------'      ||   ||   =\\\\=    \\_.'\n";
cout << "    )`-|         ||   ||       _..-'\n";
cout << "     ).-| =\\=    ||    \\  _.-' || \n";
cout << "   __==\\         \\   _.-'    /o\n";
cout << "           \\     .'\n";
cout << "           /    /\n";
cout << "      ___.'    /\n";
cout << "      `-------'\n";
}

while(engagepilot == "Engage" && StarDestroyer.health > 0)
{
	cout << "Excellent choice, sir, firing now\n";
	cout << "Direct Hit!\n";
	StarDestroyer.health = StarDestroyer.health - (Falcon2.getPower() * (randomz(5, 1) * .3));
	cout << "Current health of Star Destroyer: "<< StarDestroyer.health << endl;
	if(StarDestroyer.health > 0)
		{
			cout << "The ship is preparing to engage again, would you like to take evasive maneuvers?\n";
			cout << "Evade?								Stay?\n";
			cin >> evadestay;
		}
	while(evadestay == "Stay" && player2.health > 0 && StarDestroyer.health > 0)
	{
		cout << "Sir, I believe this is not good! Please evade the attacks\n";
		cout << "Evade?								Stay?\n";
		cin >> evadestay;
		if(evadestay == "Stay")
		{
		player2.health = player2.health - (StarDestroyer.power * randomz(5, 1) * .1);
		cout << "Current player health: "<< player2.health <<endl;
		}
		if (player2.health <= 0)
		{
			cout << "You have been killed by: Star Destroyer!\n";
			cout << "      ________\n";
			cout << "      `---.     `.\n";
			cout << "           \\      `.\n";
			cout << "            )_______`. \n";   
			cout << "        .'        //`---...___\n";
			cout << "       /         ||    // ||  `-._\n";
			cout << "    )`-|   =//=  ||   ||  ||  / ).`.\n";
			cout << "    ).-|         ||   ||  `........'`-._   (o)\n";
			cout << "   _...'.....__  ||   ||  _____      ||-\\__.'\n";
			cout << "  /_______..--'  ||   ||  -----    _ ||_/\n";
			cout << "  `-------'      ||   ||   =\\\\=    \\_.'\n";
			cout << "    )`-|         ||   ||       _..-'\n";
			cout << "     ).-| =\\=    ||    \\  _.-' || \n";
			cout << "   __==\\         \\   _.-'    /o\n";
			cout << "           \\     .'\n";
			cout << "           /    /\n";
			cout << "      ___.'    /\n";
			cout << "      `-------'\n";
		}
	}

}
//after defeating the first enemy
if(player2.health > 0)
{
cin.ignore();
cout << string(50, '\n');
cout << "Great choice sir! The enemy has been destroyed!\n";
cout << "You have defeated: Star Destroyer! Your save code is 1234\n";
cout << "The ship is currently being repaired, and you have gained 1 extra cannon!";
cin.ignore();
cout << string(50, '\n');
cannonz = cannonz + 1;
Falcon Level2(gunz, cannonz);
player2.health = 350;
	if(player2.strength > 100)
		{
			player2.health = 100;
		}
cout << "Your updated stats are:\n";
cout << "Damage Per Gun: "<< Level2.getDamagePerGun() << endl;
cout << "Your ship power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(50, '\n');


// second enemy here
cout << "You travel farther and farther into the unknown, Merv tells you you are\n";
cout << "200 light years away from Narku-7, so very close and yet so far.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(50, '\n');

cout << "Sir, an even larger attack ship is coming right for us!\n";
cin.ignore();
cout << string(50, '\n');

Enemy GalaxyEater;
GalaxyEater.Name = "Homer";
GalaxyEater.planetName = "Lort";
GalaxyEater.shipName = "Galaxy Eater";
GalaxyEater.power = Falcon2.getPower() * .7;
GalaxyEater.health = GalaxyEater.power + 100;
	if(player2.strength > 100)
		{
			GalaxyEater.power = Falcon2.getPower() * randomz(7, 3) * .1;
		}
cout << "Name of Enemy: "<< GalaxyEater.Name << endl;
cout << "Planet of Origin: " <<GalaxyEater.planetName << endl;
cout << "Name of Ship: " << GalaxyEater.shipName << endl;
cout << "Enemy ship strength: " << GalaxyEater.power << endl;
cout << "Enemy ship health: " << GalaxyEater.health << endl;

cin.ignore();
cout << "Engage?								Run?\n";
cin >> engagerun;
while(engagerun == "Run" && player2.health > 0)
	{	
		int healthEngagerun;
		cout << "Sir I believe running is not the answer to our problems, I recommend you engage!\n";
		cout << "Engage?								Run?\n";
		cin >> engagerun;
		cout << "Sir, we have been hit!\n";
		if(engagerun == "Run")
			{
				healthEngagerun = player2.health - (StarDestroyer.power * randomz(7, 3) * .1);
				player2.health = healthEngagerun;
				cout << "Current " <<player1.shipName<< " health: "<< healthEngagerun<< endl;
		
			}
	}	
if (player2.health <= 0)
{
cout << "You have been killed by: Galaxy Eater!\n";
cout << "      ________\n";
cout << "      `---.     `.\n";
cout << "           \\      `.\n";
cout << "            )_______`. \n";   
cout << "        .'        //`---...___\n";
cout << "       /         ||    // ||  `-._\n";
cout << "    )`-|   =//=  ||   ||  ||  / ).`.\n";
cout << "    ).-|         ||   ||  `........'`-._   (o)\n";
cout << "   _...'.....__  ||   ||  _____      ||-\\__.'\n";
cout << "  /_______..--'  ||   ||  -----    _ ||_/\n";
cout << "  `-------'      ||   ||   =\\\\=    \\_.'\n";
cout << "    )`-|         ||   ||       _..-'\n";
cout << "     ).-| =\\=    ||    \\  _.-' || \n";
cout << "   __==\\         \\   _.-'    /o\n";
cout << "           \\     .'\n";
cout << "           /    /\n";
cout << "      ___.'    /\n";
cout << "      `-------'\n";
}

while(engagerun == "Engage" && GalaxyEater.health > 0)
{
	cout << "Direct Hit!\n";
	GalaxyEater.health = GalaxyEater.health - Falcon2.getPower() * (randomz(7, 3) * .2);
	cout << "Current health of Galaxy Eater: "<< GalaxyEater.health << endl;
	if(GalaxyEater.health > 0)
		{
			cout << "The ship is preparing to engage again, would you like to take evasive maneuvers?\n";
			cout << "Evade?								Run?\n";
			cin >> evaderun;
		}
	while(evaderun == "Run" && player2.health > 0 && GalaxyEater.health > 0)
	{
		cout << "Sir, you really are something else...\n";
		cout << "Evade?								Run?\n";
		cin >> evaderun;
		
	}

}

}
if(player2.health > 0)
{
cin.ignore();
cout << string(50, '\n');
cout << "Great shot! The enemy has been destroyed!\n";
cout << "You have defeated: Galaxy Eater! Your save code is 4321\n";
cout << "The ship is currently being repaired, and you have gained 50 extra health points!";
cout << "You also gained 2 extra guns!\n";
cin.ignore();
cout << string(50, '\n');
gunz = gunz + 1;
Falcon Level2(gunz, cannonz);
player2.health = 450;
	if(player2.strength > 100)
		{
			player2.health = 200;
			cout << "You earned it! Your health has been doubled, and a Repair Kit has been added to your inventory!\n";
		}
cout << "Your updated stats are:\n";
cout << "Damage Per Gun: "<< Level2.getDamagePerGun() << endl;
cout << "Your ship power: "<<Level2.getPower() << endl;
cout << "Your health is: " << player2.health << endl;
cout << "Press enter to continue your adventure!\n";
cin.ignore();
cout << string(50, '\n');

//Final boss!
if(player2.health > 0)
{

cout << "You have entered Narku-7 airspace.\n";
cout << "Only a few more minutes until you have completed your quest.\n";
cout << "When suddenly...";
cin.ignore();
cout << string(50, '\n');

cout << "Hello " << player1.name << "..." <<endl;
cin.ignore();
cout << string(50, '\n');

int size = player1.name.length();
	while (size >= 0) 
	{
		size = size-1;
	}

Enemy AntiPlayer;
AntiPlayer.Name = "???";
AntiPlayer.planetName = player1.planetName;
AntiPlayer.shipName = player1.shipName;
AntiPlayer.power = Falcon2.getPower() * 1;
AntiPlayer.health = player2.health + randomz(200, 100);
	if(player2.strength > 100)
		{
			AntiPlayer.power = Falcon2.getPower();
			AntiPlayer.health = player2.health + 50;
		}
cout << "Name of Enemy: "<< AntiPlayer.Name << endl;
cout << "Planet of Origin: " <<AntiPlayer.planetName << endl;
cout << "Name of Ship: " << AntiPlayer.shipName << endl;
cout << "Enemy ship strength: " << AntiPlayer.power << endl;
cout << "Enemy ship health: " << AntiPlayer.health << endl;
cin.ignore();
cout << string(50, '\n');


cin.ignore();
cout << "Sir, there is no turning back now\n";
cout << "Engage?\n";
cin >> engage;


while(engage == "Engage" && AntiPlayer.health > 0 && player2.health > 0)
{
	if(player2.health < 100)
	{
		cout << "Sir, I found some repairs!\n";
		player2.health = player2.health + 100;
		cout << "Health upgraded to: " << player2.health << endl;
	}
	cout << "Direct Hit!\n";
	AntiPlayer.health = AntiPlayer.health - Falcon2.getPower() * (randomz(9, 4) * .1);
	if (AntiPlayer.health <= 0)
		{
			cout << "FINISH HIM!\n";
			cout << "Finish?\n";
			cin >> engage;
		}
	cout << "Current health of Anti " << player1.name << ": "<< AntiPlayer.health << endl;
	if(AntiPlayer.health > 0)
		{
			cout << "The ship is preparing to engage again, brace for impact\n";
			player2.health = player2.health - (AntiPlayer.power * randomz(10, 1) * .1);
			if(player2.strength >= 100 && player2.health < AntiPlayer.health)
			{
				cout << "Sir, would you like to use your powerup?\n";
				cin >> powerup;
				if(powerup == "Yes")
				{
					player2.health = player2.health + 200;
				}
			}
		}
	cout << "Current health: " << player2.health << endl;;
	cout << "Engage?\n";
	cin >> engage;

}
if(player2.health <= 0)
{
	cout << "You have been killed by: Anti "<<player1.name << endl;
}
else if(AntiPlayer.health <= 0)
{
	cout << "Congratulations! You have completed THE FINAL FRONTIER!\n";
	if(player2.strength >= 100)
	{
		cout << "You have defeated this game against all odds\n";
		cout << "You will forever be remembered in space!\n";
cout <<"              .-=========-.\n";
cout <<"              \\'-=======-'/\n";
cout <<"              _|   .=.   |_\n";
cout <<"             ((|  {{1}}  |))\n";
cout <<"              \\|   /|\\   |/\n";
cout <<"               \\__ '`' __/\n";
cout <<"                 _`) (`_\n";
cout <<"          jgs  _/_______\\_\n";
cout <<"              /___________\\\n";

	}
	
}

}
	
	}

		
cout << "Thank you for playing THE FINAL FRONTIER!\n";
}
}
