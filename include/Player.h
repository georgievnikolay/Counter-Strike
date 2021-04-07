#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>
#include <stdio.h>

#include "Pistol.h"
#include "Defines.h"

typedef struct {
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
} Player;

void createPlayers(BattleField* bf);

void deinit(BattleField *bf);

#endif /* PLAYER_H_ */
