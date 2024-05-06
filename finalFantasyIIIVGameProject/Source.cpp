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
	 
	
	myMap.placePlayer(1, 4);
	myMap.placeDoor(3, 4);
	myMap.printMap();
	while (true) {
		myMap.movePlayer();
		myMap.printMap();
	}

}