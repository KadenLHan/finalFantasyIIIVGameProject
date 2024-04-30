/*
Kaden Hanke
CIS 1202 101
4/30/2024
*/

#include "universalEnemyInformation.h"
#include "universalPlayerInformation.h"
#include "universalMap.h"

int main() {
	Map myMap;

	myMap.generateWalls();
	myMap.placePlayer(3, 4);
	myMap.printMap();



}