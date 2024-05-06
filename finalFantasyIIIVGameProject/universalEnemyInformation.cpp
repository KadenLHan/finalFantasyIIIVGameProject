#include "universalEnemyInformation.h"

double Enemy::getHP() const
{
	return HP;
}

void Enemy::setHP(double health)
{
	HP = health;
}

bool Enemy::getUseSpecial() const
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

bool Enemy::getUseSpells() const
{
	return useSpells;
}

void Enemy::setName(std::string Name)
{
	 name = Name;
}

std::string Enemy::getName() const
{
	return std::string(name);
}

void Enemy::setSpecialAttack(std::string SP)
{
	specialAttack = SP;
}

std::string Enemy::getSpecialAttack() const
{
	return std::string(specialAttack);
}

void Enemy::setWeakness(std::string weakTo)
{
  weakness = weakTo;
}

std::string Enemy::getWeakness () const
{
	return std::string(weakness);
}

void Enemy::setEnemyMovement(int eMovement)
{
	enemyMovement = eMovement;
}


int Enemy::getEnemyMovement() const
{
	return enemyMovement;
}

void Enemy::setCanFly(bool enemyFly)
{
	canFly = enemyFly;
}

bool Enemy::getCanFly() const
{
	return canFly;
}



