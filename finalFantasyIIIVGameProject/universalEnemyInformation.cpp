#include "universalEnemyInformation.h"

double Enemy::getHP()
{
	return HP;
}

void Enemy::setHP(double HP)
{
	double health = HP;
}

bool Enemy::getUseSpecial()
{
	return useSpecial;
}

void Enemy::setUseSpecial(bool canSpecial)
{
	bool useSpecial = canSpecial;
}

void Enemy::setUseSpells(bool canSpells)
{
	bool useSpells = canSpells;
}

bool Enemy::getUseSpells()
{
	return useSpells;
}

void Enemy::setName(std::string Name)
{
	std::string name = Name;
}

std::string Enemy::getName()
{
	return std::string(name);
}

void Enemy::setSpecialAttack(std::string SP)
{
	specialAttack = SP;
}

std::string Enemy::getSpecialAttack()
{
	return std::string(specialAttack);
}

void Enemy::setWeakness(std::string weakTo)
{
	std::string weakness = weakTo;
}

std::string Enemy::getWeakness()
{
	return std::string(weakness);
}



