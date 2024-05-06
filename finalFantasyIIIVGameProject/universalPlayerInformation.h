#pragma once
#ifndef universalPlayer_H
#define universalPlayer_H

#include <string>



class Player {
protected:
	double HP;											//players hp
	double Mana;										// PLAYERS MANA 								
	bool specialAttackGuage;							// player specialAttack Guage to use special attack
	bool ultimateAttackGuage;							// cehcks to see if the player has an ultimate attack during the turn
	std::string name;									//characters Name 
	std::string specialAttack;							// character's special attack
	std::string ultimateAttack;							// characters ultimate attack 
	int	playersMovement;								// if player goes first
	std::string playersWeapon;							// the character's weapon




public:
	
	Player(double health = 0, double mana = 0):HP(health),Mana(mana),specialAttackGuage(false),ultimateAttackGuage(false){}

	void setHp(double);
	double getHp() const;

	double getMana() const;
	void setMana(int);

	bool getSpecialAttackGuage() const;
	void setSpecialAttackGuage(bool);

	std::string getName() const;
	void setName(std::string);

	std::string getSpecialAttack() const;
	void setSpecialAttack(std::string);

	std::string getUltimateAttack() const;
	void setUltimateAttack(std::string);

	bool getUltimateAttackGuage() const;
	void setUltimateAttackGuage(bool);
	
	int getPlayerMovement() const;
	void setPlayerMovement(int);

	std::string getCharactersWeapon() const;
	void setCharactersWeapon(std::string);

	



};






#endif // !universalPlayer_H
