#include "universalCombatSystem.h"
#include "universalEnemyInformation.h"
#include "universalPlayerInformation.h"



Combat::Combat()
{
    damage = 0;
    isPlayerDead = false;
    isEnemyDead = false;

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

int Combat::CalculateTurn(int playersMovement,int enemysMovement)                                // uses both movement for the enemy and the player and calculates who goes first in the turn uses both 1 and 2 if its 1 player goes first and vice versa
{
    if (playersMovement > enemysMovement) {
        return 1;
    }
    else {
        return 2;
    }
}

bool Combat::playerManaTracker(double manaCost, double playersMana)                                     // calculates if the player can use spells by using a bool 
{
    playersMana = PlayerInformation.getMana();
    
    if (playersMana > manaCost) {
        return true;
    }
    else {
        return false;
    }
    
}

int Combat::RoundTracker()
{
    static int roundCounter = 0;
    return roundCounter++;
}

void Combat::startCombat()
{
    int round = 0;
    bool combatIsOver = false;

    while (!combatIsOver) {
        round++;

        int turn = CalculateTurn(PlayerInformation.getPlayerMovement(), EnemyInformation.getEnemyMovement());

        if (turn == 1) {
            displayCommands();

        }
        else {

        }

        if (getIsPlayerDead() || getIsEnemyDead()) {
            combatIsOver = true;
    }
        RoundTracker();

        if (RoundTracker() == 3) {
            PlayerInformation.setSpecialAttackGuage(true);
        }
        if (RoundTracker() == 7) {
            PlayerInformation.setUltimateAttackGuage(true);
        }
    }
}

void Combat::displayCommands()
{
    const int columnWidth = 20;

   
    std::cout << std::setw(columnWidth) << std::left << "a) Attack";

    
    std::cout << std::setw(columnWidth) << std::left << "b) Special Attack" << std::endl;

    
    std::cout << std::setfill('-') << std::setw(columnWidth) << "" << "+" << std::setw(columnWidth) << "" << std::setfill(' ') << std::endl;

   
    std::cout << std::setw(columnWidth) << std::left << "c) Ultimate Attack";

   
    std::cout << std::setw(columnWidth) << std::left << "d) Item" << std::endl;
}
