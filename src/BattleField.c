#include "BattleField.h"
#include "Player.h"
#include <stdio.h>

void printData(BattleField *bf) {
  Player *currTerrorist, *currCounterTerrorist;

  currTerrorist = vectorBack(&bf->Terrorists);
  currCounterTerrorist = vectorBack(&bf->CounterTerrorists);

  printf("\nTerrorist player: %d %d %d\n", currTerrorist->playerData.health, currTerrorist->playerData.armor, currTerrorist->playerId);
  printf("CounterTerrorist player: %d %d %d\n", currCounterTerrorist->playerData.health, currCounterTerrorist->playerData.armor, currCounterTerrorist->playerId);
  
  printf("Terrorist player: %d %d %d %d\n", currTerrorist->pistol.pistolType, currTerrorist->pistol.damagePerRound, currTerrorist->pistol.clipSize, currTerrorist->pistol.remainingAmmo);
  printf("CounterTerrorist player: %d %d %d %d\n", currCounterTerrorist->pistol.pistolType, currCounterTerrorist->pistol.damagePerRound, currCounterTerrorist->pistol.clipSize, currCounterTerrorist->pistol.remainingAmmo);
}




// void startBattle(BattleField *bf) {
//   while(true)
//   {
//     if(processTerroristTurn())
//     {
//       printf("Player with ID: %d wins!", PLAYER_ONE); // <<----- typo?
//       break;
//     }
//     if(processCounterTerroristTurn())
//     {
//       printf("Player with ID: %d wins!", PLAYER_TWO); // <<----- typo?
//       break;
//     }
//   }
// }

// bool processTerroristTurn() {
//   return false;
// }

// bool processCounterTerroristTurn() {
//   return false;
// }

// bool fire(Player *attacker, Player *enemy) {
  
// }