#include "save.h"
#include "battle.h"
#include <EEPROM.h>

#define SAVE_BASE 79

//All game status variables
int8_t game_status[] = {-1,0,0,0,0,0};

void save_game(){
  uint8_t i;
  uint8_t base = SAVE_BASE+1;
  EEPROM.update(SAVE_BASE,'T');
  //Save game status
  for( i = 0; i < 6; i++ ){
    EEPROM.update(i+base,game_status[i]);
  }
  base = SAVE_BASE + 7;
  //Save each character's stats
  for( i = 0; i < 3; i++ ){
      EEPROM.update(base++,party[i].level);
      EEPROM.update(base++,*((uint8_t*)&party[i].health));
      EEPROM.update(base++,*(((uint8_t*)&party[i].health)+1));
      EEPROM.update(base++,party[i].xp);
  }
  base = SAVE_BASE + 7 + 12;
  //Save inventory
  for( i = 0; i < INVENTORY_SIZE; i++ ){
    EEPROM.update(base++,inventory[i]);
  }
  base = SAVE_BASE + 7 + 12 + INVENTORY_SIZE;
  //Save player coords
  EEPROM.update(base++,(dudex+2)/8);
  EEPROM.update(base,(dudey+2)/8);
}

void restore_game(){
  uint8_t i;
  uint8_t base = SAVE_BASE+1;
  if( EEPROM.read(SAVE_BASE) == 'T' ){
    //Save game status
    for( i = 0; i < 6; i++ ){
      game_status[i] = EEPROM.read(i+base);
    }
    base = SAVE_BASE + 7;
    //Load each character's stats
    for( i = 0; i < 3; i++ ){
      party[i].level = EEPROM.read(base++);
      *((uint8_t*)&party[i].health) = EEPROM.read(base++);
      *(((uint8_t*)&party[i].health)+1) = EEPROM.read(base++);
      party[i].xp = EEPROM.read(base++);
    }
    base = SAVE_BASE + 7 + 12;
    //Save inventory
    for( i = 0; i < INVENTORY_SIZE; i++ ){
      inventory[i] = EEPROM.read(base++);
    }
    base = SAVE_BASE + 7 + 12 + INVENTORY_SIZE;
    //Load player coords
    dudex = EEPROM.read(base++)*8;
    dudey = EEPROM.read(base)*8;
    //Switch modes to start up game
    mode = TO_WORLD;
  }
}

