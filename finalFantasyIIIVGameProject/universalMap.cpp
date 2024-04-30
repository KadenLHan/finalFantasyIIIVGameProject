#include "universalMap.h"


Map::Map() :grid(10, std::vector<char>(10, '.'))
{

}

std::string Map::getNameOfRoom() const
{
	return std::string();
}

void Map::setNameOfRoom(std::string roomName)
{
	nameOfRoom = roomName;
}

std::string Map::getDescriptionOfRoom() const
{
	return std::string();
}

void Map::setDescriptionOfRoom(std::string roomDescription) 
{
	descriptionOfRoom = roomDescription;
}

void Map::printMap() const
{

	for (const auto& row : grid) {
		for (char tile : row) {
			switch (tile) {
			case '#': {
				std::cout << "[] ";	//walls
				break;
			}
			case '.':{
				std::cout << "."; // White square for empty space
				break;
			}
			case'P': {
				std::cout << "0"; // 0 for player
				break;
			}
			case'X': {
				std::cout << "X "; // character for enemys
				break;
			}
			default: {
				std::cout << tile << " ";
				
			}
			}
		}
		std::cout << std::endl;
	}

	
}

void Map::updateMap(int x, int y, char symbol)
{

	grid[y][x] = symbol;
}

void Map::clearMap()
{
	for (auto& row : grid) {
		for (char& tile : row) {
			tile = '.';
		}
	}
}

void Map::placePlayer(int x, int y)
{
	grid[y][x] = 'P';
}
