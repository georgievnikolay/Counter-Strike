#ifndef PLAYER_H_
#define PLAYER_H_

#include <stdbool.h>
#include <stdio.h>

#include "Pistol.h"
#include "Defines.h"

#define CHECK_ALLOCATION_ERROR(ptr)\
          if ((ptr) == NULL) {\
            printf("Failed to allocate memory!\n");\
            exit(1);\
          }

typedef struct Player_t {
  PlayerVitalData playerData;
  Pistol pistol;
  int playerId;
} Player;

void createTerrorists(BattleField *bf);

void createCounterTerrorists(BattleField *bf);

bool enemyHasArmor(Player *enemy);

void reduceArmor(Player *attacker, Player *enemy, float reducePercentage);

void reduceHealth(Player *attacker, Player *enemy, float reducePercentage);

bool enemyKilled(Player *enemy);

#endif /* PLAYER_H_ */