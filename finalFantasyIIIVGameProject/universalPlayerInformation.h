#pragma once
#ifndef universalPlayer_H
#define universalPlayer_H

#include <string>



class Player {
protected:
	double HP;											//players hp
	double Mana;										// PLAYERS MANA 								
	bool specialAttackGuage;							// player specialAttack Guage to use special attack
	bool ultimateAttackGuage;
	std::string name;									//characters Name 
	std::string specialAttack;							// character's special attack
	std::string ultimateAttack;							// characters ultimate attack 




public:
	Player() {
		Mana = 0;
		HP = 0;
	}

	Player(double health) {
		HP = health;
	}

	Player(double cMana) {
		Mana = cMana;
	}

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
	
	


	



};






#endif // !universalPlayer_H
