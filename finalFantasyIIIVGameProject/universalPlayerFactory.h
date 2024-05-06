#pragma once
#ifndef Universal_PlayerFactory
#define Universal_PlayerFactory
#include "universalPlayerInformation.h"

// used to create the players and initalizes the variables from the player information
class PlayerFactory {
public:
	static Player createCloud() {
		Player cloud;
		cloud.setHp(200);
		cloud.setMana(50);
		cloud.setName("Cloud");
		cloud.setCharactersWeapon("Buster Sword");
		cloud.setPlayerMovement(50);
		cloud.setUltimateAttack("Cross Slash");
		cloud.setSpecialAttack("Breaker");
		cloud.setSpecialAttackGuage(false);
		cloud.setUltimateAttackGuage(false);
	}
	static Player Barett() {
		Player barett;
		barett.setHp(400);
		barett.setMana(30);
		barett.setName("Barett");
		barett.setCharactersWeapon("Minigun");
		barett.setPlayerMovement(20);
		barett.setUltimateAttack("Bombardment");
		barett.setSpecialAttack("Focused Shot");
		barett.setSpecialAttackGuage(false);
		barett.setUltimateAttackGuage(false);
	}



};
#endif // !Universal_PlayerFactory
