#include <stdlib.h>
#include "Pistol.h"
#include "Player.h"

static bool clipHasRemainingBullets(Player *attacker) {
  if (attacker->pistol.currClipBullets > 0) {
    return true;
  }
  return false;
}

static bool pistolIsEmpty(Player *attacker) {
  if (attacker->pistol.remainingAmmo == 0) {
    printf("No ammo left\n");
    return true;
  }
  return false;
}

static void reload(Player *attacker) {
  if (!pistolIsEmpty(attacker)){
    printf("Reloading...\n");
    for (int i = 0; i < attacker->pistol.clipSize; i++) {
      attacker->pistol.currClipBullets++;
      attacker->pistol.remainingAmmo--;

      if (pistolIsEmpty(attacker)) {  //<----------- !
        break;
      }
    }
    printf("currClipBullets: %d, remainingAmmo: %d\n", attacker->pistol.currClipBullets, attacker->pistol.remainingAmmo);
  }
}

static void discardBullet(Player *attacker) {
  attacker->pistol.currClipBullets--;
}

static bool shoot(Player *attacker, Player *enemy) {
  float armorPierce = DEAGLE_ARMOR_PIERCE_PERCENTAGE;
  float healthPierce = DEAGLE_HEALTH_PIERCE_PERCENTAGE;

  if (attacker->pistol.pistolType == GLOCK) {
    armorPierce = GLOCK_ARMOR_PIERCE_PERCENTAGE;
    healthPierce = GLOCK_HEALTH_PIERCE_PERCENTAGE;
  }

  

}

void pistolInit(Player *currPlayer) {
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

