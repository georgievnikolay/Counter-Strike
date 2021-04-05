#include "BattleField.h"

#include <stdio.h>

void playerInit(Player *currPlayer, int healthInput, int armorInput, int indx) {
  currPlayer->playerData.health = healthInput;
  currPlayer->playerData.armor = armorInput;
  currPlayer->playerId = indx;
}

void createPlayers(BattleField *bf) {
  int playerHealth = 0;
  int playerArmor = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d", &playerHealth, &playerArmor);
    playerInit(&bf->players[i], playerHealth, playerArmor, i);
  }
}

void pistolInit(Player *currPlayer, PistolType pistolType, int damage, int clipSize, int ammo) {
  currPlayer->pistol.pistolType = pistolType;
  currPlayer->pistol.damagePerRound = damage;
  currPlayer->pistol.clipSize = clipSize;
  currPlayer->pistol.currClipBullets = clipSize;
  currPlayer->pistol.remainingAmmo = ammo;
}

void buyPistols(BattleField *bf) {
  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  for (int i = 0; i < PLAYERS_COUNT; ++i) {
    scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
        &pistolRemainingAmmo);
    pistolInit(&bf->players[i], pistolId, pistolDamagePerRound, 
                pistolClipSize, pistolRemainingAmmo);
  }
}

void startBattle(BattleField *bf) {
  while(true)
  {
    if(processTerroristTurn())
    {
      printf("Player with ID: %d wins!", bf->players[0].playerId); // <<----- typo?
      break;
    }
    if(processCounterTerroristTurn())
    {
      printf("Player with ID: %d wins!", bf->players[1].playerId); // <<----- typo?
      break;
    }
  }
}

bool processTerroristTurn() {
  return false;
}

bool processCounterTerroristTurn() {
  return false;
}

bool fire(Player *attacker, Player *enemy) {
  
}