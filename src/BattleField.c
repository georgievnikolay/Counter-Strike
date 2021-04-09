#include "BattleField.h"
#include "Player.h"
#include <stdio.h>
#include <stdlib.h>

void createPlayers(BattleField *bf) {
  createTerrorists(bf);
  createCounterTerrorists(bf);
}

void buyPistols(BattleField *bf) {
  for(int i = 0; i < PLAYERS_IN_TEAM; i++) {
    pistolInit(vectorGet(&bf->Terrorists, i));
    pistolInit(vectorGet(&bf->CounterTerrorists, i));
  }
}

static bool processTurn(Vector *attackerTeam, Vector *enemyTeam) {
  Player *attacker;
  Player *enemy;
  int currentTeamSz = vectorGetSize(attackerTeam);

  for (int i = 0; i < currentTeamSz; i++) {
    attacker = vectorGet(attackerTeam, i);
    enemy = vectorBack(enemyTeam);

    printf("\nPlayerID %d turn:\n", attacker->playerId);

    if (attacker->pistol.fire(attacker, enemy)) {
      free(vectorBack(enemyTeam));
      vectorPop(enemyTeam);
    }

    if(vectorIsEmpty(enemyTeam)) {
      printf("\nPlayer with ID: %d wins!\n", attacker->playerId);
      return true;
    }
  }
  return false;
}

void startBattle(BattleField *bf) {
  while(true)
  {
    if(processTurn(&bf->Terrorists, &bf->CounterTerrorists))
    {
      /*Remove comments in case you want to play with more players in team*/
      //printf("\nTerrorists Win!\n");
      break;
    }
    if(processTurn(&bf->CounterTerrorists, &bf->Terrorists))
    {
      //printf("\nCounter-Terrorists Win!\n");
      break;
    }
  }
}

void deinit(BattleField *bf) {
  while(!vectorIsEmpty(&bf->Terrorists)) {
    free(vectorBack(&bf->Terrorists));
    vectorPop(&bf->Terrorists);
  }
  while(!vectorIsEmpty(&bf->CounterTerrorists)) {
    free(vectorBack(&bf->CounterTerrorists));
    vectorPop(&bf->CounterTerrorists);
  }
  vectorFree(&bf->Terrorists);
  vectorFree(&bf->CounterTerrorists);
}