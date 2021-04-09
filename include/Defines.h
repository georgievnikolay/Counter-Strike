#ifndef DEFINES_H_
#define DEFINES_H_

typedef enum {
  GLOCK, DESERT_EAGLE
} PistolType;

enum GlockDefines {
  ROUNDS_PER_FIRE = 3
};

enum PlayerDefines {
  PLAYER_ONE, PLAYER_TWO, PLAYERS_COUNT
};

typedef struct {
  int health;
  int armor;
} PlayerVitalData;

typedef enum{
  PLAYERS_IN_TEAM = 1
} TeamDefines;

#endif /* DEFINES_H_ */
