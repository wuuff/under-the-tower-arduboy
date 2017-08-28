#ifndef DUNGEON_H
#define DUNGEON_H
extern uint8_t dungeonid;

struct dungeon{
  uint8_t x;
  uint8_t y;
  uint8_t type;
  uint8_t theme;
  uint8_t size;
  uint8_t exit;
};

#define NUM_DUNGEONS 5
extern const struct dungeon dungeons[];

#define NUM_DUN_TILES 5

#endif