#pragma once
#ifndef universalPlayer_H
#define universalPlayer_H

#include <string>



class Player {
protected:
	int HP;
	int Mana;
	int armorClass;
	int specialAttackGuage;
	std::string Name;
	std::string specialAttack;
	std::string ultimateAttack;




public:
	Player() {
		int HP = 0;
		int Mana = 0;
		int armorClass = 0;
		int specialAttackGuage = 0;
	}

	void getHp() const;
	int setHp(int);

	void getMana() const;
	int setMana(int);

	void getArmorClass() const;
	int setArmorClass(int);

	void getSpecialAttackGuage() const;
	int setSpecialAttackGuage(int);

	void getName() const;
	std::string setName(std::string);

	void getSpecialAttack() const;
	std::string setSpecialAttack(std::string);

	void getUltimateAttack() const;
	std::string setUltimateAttack(std::string);
	
	


	



};






#endif // !universalPlayer_H
