#include <stdlib.h>

#include "BattleField.h"
#include "Pistol.h"
#include "Player.h"

int main() {
  BattleField battleField;

  createPlayers(&battleField);

  buyPistols(&battleField);
  printData(&battleField);

  //startBattle(&battleField);

  deinit(&battleField);

  return EXIT_SUCCESS;
}
