#pragma once
#ifndef Universal_Combat
#define Universal_Combat

#include "universalEnemyInformation.h"			// uses both enemy and player information for combat
#include "universalPlayerInformation.h"
#include "universalEnemyFactor.h"
#include "universalPlayerFactory.h"
#include <iostream>
#include <iomanip>


// univeral combat logic-how combat will work in this game.

class Combat {
protected:
								
	double damage;								// used to calculate how much an attack does
	std::string choice;							// used to calculate the choice of the user	
	std::string Status;							// used to calculate if they have debuffs or buffs or not
	bool isPlayerDead;
	bool isEnemyDead;
	Player PlayerInformation;
	Enemy EnemyInformation;




public:

	Combat();

	

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

	int CalculateTurn(Player,Enemy);

	bool playerManaTracker(double, double);
	int RoundTracker();

	void startCombat();
	void displayCommands();




};









#endif // !Universal_Combat
