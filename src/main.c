#include <stdlib.h>

#include "BattleField.h"

int main() {
  BattleField battleField;

  createPlayers(&battleField);
  buyPistols(&battleField);
  startBattle(&battleField);
  deinit(&battleField);

  return EXIT_SUCCESS;
}