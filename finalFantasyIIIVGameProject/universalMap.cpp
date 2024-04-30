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
    // Check if the position is within the map boundaries
    if (x >= 0 && x < grid[0].size() && y >= 0 && y < grid.size()) {
        // Set the player's position
        playerX = x;
        playerY = y;
        // Update the map to reflect the player's position
        grid[playerY][playerX] = PLAYER;
    }
    else {
        std::cout << "Invalid position for placing the player!" << std::endl;
    }
    
  
}

void Map::placeEnemy(int y, int x)
{
    if (grid[y][x] == EMPTY_SPACE) {
        grid[y][x] = ENEMY;
    }
    else {
        std::cout << "Cannot place enemy at this position." << std::endl;
    }
}

void Map::movePlayer()
{
    char direction;
    std::cout << "Enter direction (w = up, a = left, s = down, d = right): ";
    std::cin >> direction;

    // Calculate the new position based on the direction
    int newX = playerX;
    int newY = playerY;

    // Adjust the new position based on the direction
    switch (direction) {
    case 'w': // Up
        newY--;
        break;
    case 'a': // Left
        newX--;
        break;
    case 's': // Down
        newY++;
        break;
    case 'd': // Right
        newX++;
        break;
    default:
        std::cout << "Invalid direction!" << std::endl;
        return; // Exit the function if direction is invalid
    }

    // Check if the new position is within the map boundaries and is not a wall
    if (newX >= 0 && newX < grid[0].size() && newY >= 0 && newY < grid.size() && grid[newY][newX] != WALL) {
        // Move the player to the new position
        grid[playerY][playerX] = EMPTY_SPACE; // Clear current position
        playerX = newX; // Update player's x-coordinate
        playerY = newY; // Update player's y-coordinate
        grid[playerY][playerX] = PLAYER; // Place player at the new position
    }
    else {
        std::cout << "Cannot move in that direction!" << std::endl;
    }
}

