#ifndef PISTOL_H_
#define PISTOL_H_

#include "Defines.h"
#include "BattleField.h"

#define GLOCK_ARMOR_PIERCE_PERCENTAGE 0.5
#define GLOCK_HEALTH_PIERCE_PERCENTAGE 0.5

#define DEAGLE_ARMOR_PIERCE_PERCENTAGE 0.25
#define DEAGLE_HEALTH_PIERCE_PERCENTAGE 0.75

#define UNARMORED_PIERCE_PERCENTAGE 1

typedef struct {
  PistolType pistolType;
  int damagePerRound;
  int clipSize;
  int currClipBullets;
  int remainingAmmo;
} Pistol;

void buyPistols(BattleField* bf);

#endif /* PISTOL_H_ */