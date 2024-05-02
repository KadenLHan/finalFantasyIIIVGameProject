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

	static const char WALL = '[]';
	static const char EMPTY_SPACE = '.';
	static const char PLAYER = '0';
	static const char ENEMY = 'X';
	static const char DOOR = 'D';
	int playerX; 
	int playerY; 

	
public:
	Map();

	std::string getNameOfRoom() const;
	void setNameOfRoom(std::string);

	std::string getDescriptionOfRoom() const;
	void setDescriptionOfRoom(std::string);

	void printMap() const;			// used to print the map
	void placePlayer(int, int);		 // used to place player on map and checks to see if player is near objects or enemies
	void placeEnemy(int, int);		// used to place enemy for rooms
	void placeWall(int, int);		// used to place wall for rooms
	void placeDoor(int, int);		// used to place doors for rooms
	bool movePlayer();				// used to move the player
	void room1();
	void room2();
	void room3();
	void generateNewRoom(int);

	
	


};





#endif // !MAP_H




