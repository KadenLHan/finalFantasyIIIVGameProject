#include "universalPlayerInformation.h"

Player::Player()
{
	HP = 0;
	Mana = 0;
	specialAttackGuage = false;
	ultimateAttackGuage = false;
	playersMovement = 0;
}

void Player::setHp(double health)
{
	HP = health;
}

double Player::getHp() const
{
	return HP;
}


void Player::setMana(int playerMana)
{
	 Mana = playerMana;
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
	 specialAttackGuage = hasSpecial;
}

std::string Player::getName() const
{
	return std::string(name);
}

void Player::setName(std::string characterName)
{
	name = characterName;
}

std::string Player::getSpecialAttack() const
{
	return std::string(specialAttack);
}

void Player::setSpecialAttack(std::string characterSpecial)
{
	 specialAttack = characterSpecial;
}

std::string Player::getUltimateAttack() const
{
	return std::string(ultimateAttack);
}

void Player::setUltimateAttack(std::string characterUltimate)
{
	 ultimateAttack = characterUltimate;
}

bool Player::getUltimateAttackGuage() const
{
	return ultimateAttackGuage;
}

void Player::setUltimateAttackGuage(bool hasUltimate)
{
	 ultimateAttackGuage = hasUltimate;
}

int Player::getPlayerMovement() const
{
	return playersMovement;
}

void Player::setPlayerMovement(int characterMovement)
{
	playersMovement = characterMovement;
}

std::string Player::getCharactersWeapon() const
{
	return std::string(playersWeapon);
}

void Player::setCharactersWeapon(std::string charactersWeapon)
{
	playersWeapon = charactersWeapon;
}
