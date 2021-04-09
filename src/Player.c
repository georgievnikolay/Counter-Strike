#include <stdlib.h>
#include "Player.h"

static void playerInit(Player *currPlayer, int indx) {
  int playerHealth = 0;
  int playerArmor = 0;

  scanf("%d %d", &playerHealth, &playerArmor);
  currPlayer->playerData.health = playerHealth;
  currPlayer->playerData.armor = playerArmor;
  currPlayer->playerId = indx;
}

void createTerrorists(BattleField *bf) {
  vectorInit(&bf->Terrorists, PLAYERS_IN_TEAM);

  int playerIndex = 0;
  for (int i = 0; i < PLAYERS_IN_TEAM; i++) {
    Player *newTerrorist = malloc(sizeof(Player));
    CHECK_ALLOCATION_ERROR(newTerrorist);

    playerInit(newTerrorist, playerIndex);
    vectorPush(&bf->Terrorists, newTerrorist);
    playerIndex += 2;
  }
}

void createCounterTerrorists(BattleField *bf) {
  vectorInit(&bf->CounterTerrorists, PLAYERS_IN_TEAM);

  int playerIndex = 1;
  for (int i = 0; i < PLAYERS_IN_TEAM; i++) {
    Player *newCounterTerrorist = malloc(sizeof(Player));
    CHECK_ALLOCATION_ERROR(newCounterTerrorist);

    playerInit(newCounterTerrorist, playerIndex);
    vectorPush(&bf->CounterTerrorists, newCounterTerrorist);
    playerIndex += 2;
  }
}

bool enemyHasArmor(Player *enemy){
  if (enemy->playerData.armor > 0) {
    return true;
  }
  return false;
}

void reduceArmor(Player *attacker, Player *enemy, float reducePercentage) {
  int totalDamage = attacker->pistol.damagePerRound * reducePercentage;

  enemy->playerData.armor -= totalDamage;
  if (enemy->playerData.armor < 0) {
    enemy->playerData.health += enemy->playerData.armor;
    enemy->playerData.armor = 0;
  }
}

void reduceHealth(Player *attacker, Player *enemy, float reducePercentage) {
  int totalDamage = attacker->pistol.damagePerRound * reducePercentage;
  enemy->playerData.health -= totalDamage;
}

bool enemyKilled(Player *enemy){
  if (enemy->playerData.health <= 0) {
    return true;
  }
  return false;
}