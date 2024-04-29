#pragma once
#ifndef universalEnemy_H
#define universalEnemy_H

#include <string>

class Enemy {
protected:	
	double HP;								// how much HP they have
	bool useSpecial;						// if they can use a special attack
	bool useSpells;							// if they can use spells
	bool canMove;							// if they can move
	std::string damageType;					// if they're melee or ranged
	std::string name;						// enemy's name
	std::string specialAttack;				//their special attack(if applicable)
	std::string weakness;					// enemy's weakness

public:

	Enemy() {
		HP = 0;
		useSpecial = false;
		useSpells = false;
	}

	double getHP();
	void setHP(double);

	bool getUseSpecial();
	void setUseSpecial(bool);
	
	void setUseSpells(bool);
	bool getUseSpells();

	void setName(std::string);
	std::string getName();

	void setSpecialAttack(std::string);
	std::string getSpecialAttack();

	void setWeakness(std::string);
	std::string getWeakness();


	
};








#endif // !universalEnemy_H
