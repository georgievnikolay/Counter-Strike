#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>

#include "Pistol.h"
#include "Defines.h"

#define GLOCK_ARMOR_PIERCE_PERCENTAGE 0.5
#define GLOCK_HEALTH_PIERCE_PERCENTAGE 0.5

#define DEAGLE_ARMOR_PIERCE_PERCENTAGE 0.25
#define DEAGLE_HEALTH_PIERCE_PERCENTAGE 0.75

#define UNARMORED_PIERCE_PERCENTAGE 1

typedef struct {
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
} Player;

#endif /* PLAYER_H_ */
