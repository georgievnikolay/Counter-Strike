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

static void createTerrorists(BattleField *bf) { //<-- one function
  vectorInit(&bf->Terrorists, PLAYERS_IN_TEAM);

  int playerIndex = 0;
  for (int i = 0; i < PLAYERS_IN_TEAM; i++) {
    Player *newTerrorist = malloc(sizeof(Player)); //<<--kato gi killnem gi osvobojdavame

    playerInit(&newTerrorist[i], playerIndex);
    vectorPush(&bf->Terrorists, &(newTerrorist[i]));
    playerIndex += 2;
  }
}

static void createCounterTerrorists(BattleField *bf) {
  vectorInit(&bf->CounterTerrorists, PLAYERS_IN_TEAM);

  int playerIndex = 1;
  for (int i = 0; i < PLAYERS_IN_TEAM; i++) {
    Player *newCounterTerrorist = malloc(sizeof(Player));
    playerInit(&newCounterTerrorist[i], playerIndex);
    vectorPush(&bf->CounterTerrorists, &(newCounterTerrorist[i]));
    playerIndex += 2;
  }
}

void createPlayers(BattleField *bf) {
  createTerrorists(bf);
  createCounterTerrorists(bf);
}

void deinit(BattleField *bf) {
  vectorFree(&bf->Terrorists);
  vectorFree(&bf->CounterTerrorists);
  //Player* ptrT, *ptrC; 
}