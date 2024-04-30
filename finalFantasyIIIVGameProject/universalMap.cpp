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

	int height = grid.size();
	int width = grid[0].size();

	for (int y = 0; y < height; ++y) {
		for (int x = 0; x < width; ++x) {
			char tile = grid[y][x];
			switch (tile) {
			case WALL:
				std::cout << "[] ";    // Walls
				break;
			case EMPTY_SPACE:
				std::cout << ". ";     // Empty space
				break;
			case PLAYER:
				std::cout << "P ";     // Player
				break;
			case ENEMY:
				std::cout << "X ";     // Enemy
				break;
			case DOOR:
				std::cout << "D ";     // Door
				break;
			default:
				std::cout << tile << " "; // Other characters
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

void Map::generateWalls()
{
	clearMap();

	int width = grid[0].size();
	int height = grid.size();



	for (int y = 0; y < height; ++y) {
		for (int x = 0; x < width; ++x) {
			if (y == 0 || y == height - 1 || x == 0 || x == width - 1) {
				grid[y][x] = WALL; // Place wall if at perimeter
			}
		}
	}
	
}
