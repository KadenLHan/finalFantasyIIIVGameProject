#pragma once

// This will be the class for the map of the game

#ifndef MAP_H
#define MAP_H
#include <vector>
#include <string>
#include <iostream>



class Map {
protected:
	std::string nameOfRoom;
	std::string descriptionOfRoom;
	std::vector<std::vector<char>> grid;		// used to represent the map layout
	
public:
	Map();

	std::string getNameOfRoom() const;
	void setNameOfRoom(std::string);

	std::string getDescriptionOfRoom() const;
	void setDescriptionOfRoom(std::string);

	void printMap() const;

	void updateMap(int, int,char); // x and y are cordinates, symbol is used to differentiate between player/object/enemy

	void clearMap(); // used to clear the map

	void placePlayer(int, int);  // used to place player on map

	
};





#endif // !MAP_H




