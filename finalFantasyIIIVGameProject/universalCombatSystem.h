#pragma once
#ifndef Universal_Combat
#define Universal_Combat

#include "universalEnemyInformation.h"			// uses both enemy and player information for combat
#include "universalPlayerInformation.h"


// univeral combat logic-how combat will work in this game.

class Combat {
protected:
	double turn;								//used to calculate turn
	double damage;								// used to calculate how much an attack does
	std::string choice;							// used to calculate the choice of the user	
	std::string Status;							// used to calculate if they have debuffs or buffs or not
	bool isPlayerDead;
	bool isEnemyDead;
	Player PlayerInformation;
	Enemy EnemyInformation;




public:

	Combat();

	double getTurn() const;
	void setTurn(int);

	double getDamage() const;
	void setDamage(int);

	std::string getChoice() const;
	void setChoice(std::string);

	bool getIsPlayerDead() const;
	void setIsPlayerDead(bool);

	bool getIsEnemyDead() const;
	void setIsEnemyDead(bool);

	double howMuchPlayerDamage(double, double);
	double howMuchEnemyDamage(double, double);

	int CalculateTurn(int,int);




};









#endif // !Universal_Combat
