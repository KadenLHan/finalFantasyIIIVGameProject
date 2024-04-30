/*
Kaden Hanke
CIS 1202 101
4/30/2024
*/

#include "universalEnemyInformation.h"
#include "universalPlayerInformation.h"
#include "universalMap.h"

using namespace std;

int main() {
	Map myMap;
	int SIZE = 10;
	int i = 0;
	
	
	myMap.placePlayer(2, 3);
	myMap.placeEnemy(4, 4);
	myMap.placeWall(2, 2);
	myMap.placeDoor(2, 5);
	for (i = 0; i < SIZE; i++) {
		myMap.printMap();
		myMap.movePlayer();
	}
}