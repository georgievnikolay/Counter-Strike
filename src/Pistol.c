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

      if (attacker->pistol.remainingAmmo == 0) {
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

  if(clipHasRemainingBullets(attacker)) {
    if(enemyHasArmor(enemy)) {
      reduceArmor(attacker, enemy, armorPierce);
      reduceHealth(attacker, enemy, healthPierce);
    }
    else {
      reduceHealth(attacker, enemy, UNARMORED_PIERCE_PERCENTAGE);
    }

    discardBullet(attacker);
    printf("Enemy left with: %d health and %d armor\n", enemy->playerData.health, enemy->playerData.armor);

    return true;
  }
  return false;
}

static bool deagleAttack(Player *attacker, Player *enemy) {
  if(shoot(attacker, enemy)) {
    if(enemyKilled(enemy)) { 
      return true;
    }
  }
  else {
    reload(attacker);
  }
  return false;
}

static bool glockAttack(Player *attacker, Player *enemy) {
  for(int i = 0; i < ROUNDS_PER_FIRE; i++) {
    if(shoot(attacker, enemy)) {
      if(enemyKilled(enemy)) {
        return true;
      }
    }
    else {
      reload(attacker);
      break;
    }
  }
  return false;
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

  if(pistolId == GLOCK) {
    currPlayer->pistol.fire = glockAttack;
  }
  else {
    currPlayer->pistol.fire = deagleAttack;
  }
}