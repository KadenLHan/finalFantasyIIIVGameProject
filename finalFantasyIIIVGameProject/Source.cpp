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
	 
	int SIZE = 20;
	int i = 0;
	

	myMap.printMap();
	while (true) {
		if (myMap.movePlayer()) {

			myMap.printMap();
		}
	}

}