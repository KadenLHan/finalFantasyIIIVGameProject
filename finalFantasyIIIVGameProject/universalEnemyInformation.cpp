#include "universalEnemyInformation.h"

double Enemy::getHP()
{
	return HP;
}

void Enemy::setHP(double health)
{
	HP = health;
}

bool Enemy::getUseSpecial()
{
	return useSpecial;
}

void Enemy::setUseSpecial(bool canSpecial)
{
	 useSpecial = canSpecial;
}

void Enemy::setUseSpells(bool canSpells)
{
	 useSpells = canSpells;
}

bool Enemy::getUseSpells()
{
	return useSpells;
}

void Enemy::setName(std::string Name)
{
	 name = Name;
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
  weakness = weakTo;
}

std::string Enemy::getWeakness()
{
	return std::string(weakness);
}

void Enemy::setEnemyMovement(std::string eMovement)
{
	enemyMovement = eMovement;
}

std::string Enemy::getEnemyMovement()
{
	return std::string(enemyMovement);
}



