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
	bool canFly;							// if they can fly
	std::string damageType;					// if they're melee or ranged
	std::string name;						// enemy's name
	std::string specialAttack;				//their special attack(if applicable)
	std::string weakness;					// enemy's weakness
	int enemyMovement;						//used for who goes first

public:

	Enemy(double health) :HP(health), useSpecial(false), useSpells(false), canMove(false), canFly(false){}

	double getHP() const;
	void setHP(double);

	bool getUseSpecial() const;
	void setUseSpecial(bool);
	
	void setUseSpells(bool);
	bool getUseSpells() const;

	void setName(std::string);
	std::string getName() const;

	void setSpecialAttack(std::string);
	std::string getSpecialAttack() const;

	void setWeakness(std::string);
	std::string getWeakness() const;

	void setEnemyMovement(int);
	int getEnemyMovement() const;

	void setCanFly(bool);
	bool getCanFly() const;

	
};








#endif // !universalEnemy_H
