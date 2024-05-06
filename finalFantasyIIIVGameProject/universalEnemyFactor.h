#pragma once
#ifndef Universal_EnemyFactory
#define Universal_EnemyFactory
#include "universalEnemyInformation.h"

class EnemyFactory {
public:
	static Enemy createGuard() {
		Enemy guard;
		guard.setHP(100);
		guard.setCanFly(false);
		guard.setUseSpells(false);
		guard.setUseSpecial(false);
		guard.setEnemyMovement(20);
		guard.setName("GuardsMan");
		guard.setWeakness("Wind");
	}
};
#endif // !Universal_EnemyFactory
