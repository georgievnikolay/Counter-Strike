#ifndef BATTLEFIELD_H_
#define BATTLEFIELD_H_

#include "Player.h"

typedef struct {
  Player players[PLAYERS_COUNT];
} BattleField;

void createPlayers(BattleField* bf);

void buyPistols(BattleField* bf);

void startBattle(BattleField* bf);

void pistolInit(Player *currPlayer, PistolType pistolType, int damage, int clipSize, int ammo);
void playerInit(Player *currPlayer, int healthInput, int armorInput, int indx) ;

#endif /* BATTLEFIELD_H_ */
