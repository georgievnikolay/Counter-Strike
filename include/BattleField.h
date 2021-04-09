#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include "Vector.h"
#include "Defines.h"

typedef struct {
  Vector Terrorists;
  Vector CounterTerrorists;
} BattleField;

void createPlayers(BattleField *bf);

void buyPistols(BattleField *bf);

void startBattle(BattleField *bf);

void deinit(BattleField *bf);

#endif /* BATTLEFIELD_H_ */