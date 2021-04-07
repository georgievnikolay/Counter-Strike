#include "Pistol.h"
#include "Player.h"

static void pistolInit(Player *currPlayer) {
  int pistolId = 0;
  int pistolDamagePerRound = 0;
  int pistolClipSize = 0;
  int pistolRemainingAmmo = 0;

  scanf("%d %d %d %d", &pistolId, &pistolDamagePerRound, &pistolClipSize,
        &pistolRemainingAmmo);
  
  currPlayer->pistol.pistolType = pistolId;
  currPlayer->pistol.damagePerRound = pistolDamagePerRound;
  currPlayer->pistol.clipSize = pistolClipSize;
  currPlayer->pistol.currClipBullets = pistolClipSize;
  currPlayer->pistol.remainingAmmo = pistolRemainingAmmo;
}

void buyPistols(BattleField *bf) {
  // Player *currTerrorist, *currCounterTerrorist;
  // for(int i = 0; i < PLAYERS_IN_TEAM; i++) {
  //   currTerrorist = vectorGet(&bf->Terrorists, i);
  //   currCounterTerrorist = vectorGet(&bf->CounterTerrorists, i);
  //   pistolInit(currTerrorist);
  //   pistolInit(currCounterTerrorist);
  // }

  for(int i = 0; i < PLAYERS_IN_TEAM; i++) {
    pistolInit(vectorGet(&bf->Terrorists, i));
    pistolInit(vectorGet(&bf->CounterTerrorists, i));
  }
}