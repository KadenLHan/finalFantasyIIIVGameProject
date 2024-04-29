#include "universalPlayerInformation.h"

void Player::setHp(double HP)
{
	double health = HP;
}

double Player::getHp() const
{
	return HP;
}


void Player::setMana(int Pmana)
{
	double playerMana = Pmana;
}

double Player::getMana() const
{
	return Mana;
}

bool Player::getSpecialAttackGuage() const
{
	return specialAttackGuage;
}

void Player::setSpecialAttackGuage(bool hasSpecial)
{
	bool playerSpecial = hasSpecial;
}

std::string Player::getName() const
{
	return std::string(name);
}

void Player::setName(std::string characterName)
{
	std::string cName = characterName;
}

std::string Player::getSpecialAttack() const
{
	return std::string(specialAttack);
}

void Player::setSpecialAttack(std::string characterSpecial)
{
	std::string cSpecial = characterSpecial;
}

std::string Player::getUltimateAttack() const
{
	return std::string(ultimateAttack);
}

void Player::setUltimateAttack(std::string characterUltimate)
{
	std::string cUltimate = characterUltimate;
}

bool Player::getUltimateAttackGuage() const
{
	return ultimateAttackGuage;
}

void Player::setUltimateAttackGuage(bool hasUltimate)
{
	bool playerUltimate = hasUltimate;
}
