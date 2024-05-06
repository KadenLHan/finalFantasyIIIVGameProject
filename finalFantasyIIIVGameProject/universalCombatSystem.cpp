#include "universalCombatSystem.h"

Combat::Combat()
{
    damage = 0;
    turn = 0;
    isPlayerDead = false;
    isEnemyDead = false;
}

double Combat::getTurn() const
{
    return turn;
}

void Combat::setTurn(int WhosTurn)
{
    turn = WhosTurn;
}

double Combat::getDamage() const
{
    return damage;
}

void Combat::setDamage(int WhosDamage)
{
    damage = WhosDamage;
}

std::string Combat::getChoice() const
{
    return choice;
}

void Combat::setChoice(std::string WhosChoice)
{
    choice = WhosChoice;
}

bool Combat::getIsPlayerDead() const
{
    return isPlayerDead;
}

void Combat::setIsPlayerDead(bool PlayerDeadOrNot)
{
    isPlayerDead = PlayerDeadOrNot;
}

bool Combat::getIsEnemyDead() const
{
    return isEnemyDead;
}

void Combat::setIsEnemyDead(bool EnemyDeadOrNot)
{
    isEnemyDead = EnemyDeadOrNot;
}

double Combat::howMuchPlayerDamage(double health, double EnemyDamage)                   // calculates how much damage an attack does and checks if either player or enemy is dead in both functions
{
    health = PlayerInformation.getHp();
    EnemyDamage = damage;



    double totalDamageToPlayer = health - EnemyDamage;

    if (health <= 0) {
        isPlayerDead = true;
        totalDamageToPlayer = 0;
    }


    return totalDamageToPlayer;
}

double Combat::howMuchEnemyDamage(double health, double PlayerDamage)
{
    health = EnemyInformation.getHP();
    PlayerDamage = damage;
    double totalDamageToEnemy = health - PlayerDamage;

    if (health <= 0) {
        isEnemyDead = true;
        totalDamageToEnemy = 0;
    }

   
    return totalDamageToEnemy;      
}

int Combat::CalculateTurn(int,int)                                // uses both movement for the enemy and the player and calculates who goes first in the turn 
{

}
