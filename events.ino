#include "events.h"
#include "save.h"
#include "battle.h"
#include "dungeon.h"
#include "dialogue.h"

struct dialogue_event{
  uint8_t status_index;
  uint8_t status_value;
  uint8_t dungeon_id;
  uint8_t dungeon_level;
  uint16_t dialogue_index;
  uint8_t dialogue_len;
  uint8_t name_index;
};

/* Boss events depend on dialogue occurring before
 * them, so they don't bother to check the dungeon.
 */
struct boss_event{
  uint8_t status_index;
  uint8_t status_value;
  uint8_t boss_id;
};

#define NUM_DIALOGUE_EVENTS 44
const dialogue_event dialogue_events[NUM_DIALOGUE_EVENTS] PROGMEM = {
  //CATPAW---SLAVER DIALOGUE
  {STATUS_MAIN,2,0,2,TXT_SLAVER,TXT_SLAVER_LEN,SLAVER},
  //CATPAW---GIRL THANKS
  {STATUS_MAIN,4,0,2,TXT_GIRL_THX,TXT_GIRL_THX_LEN,3},
  //CATPAW---SHADOW DIALOGUE
  {STATUS_MAIN,5,0,0,TXT_SDW_BATTLE,TXT_SDW_BATTLE_LEN,SHADOW},
  //CATPAW---SHADOW JOINS (SPECIAL CASE)
  {STATUS_MAIN,7,0,0,TXT_SDW_WIN,TXT_SDW_WIN_LEN,SHADOW},
  //FATHER'S RESIDENCE---GIRL WARNING
  {STATUS_MAIN,8,1,0,TXT_GIRL_FATHER,TXT_GIRL_FATHER_LEN,3},
  //FATHER'S RESIDENCE---ENEMY ALERT
  {STATUS_MAIN,9,1,2,TXT_ENEMY,TXT_ENEMY_LEN,BRUISER},
  //FATHER'S RESIDENCE---FATHER THANKS
  {STATUS_MAIN,11,1,2,TXT_FATHER,TXT_FATHER_LEN,4},
  //LARGE SHIP---SHADOW INFO
  {STATUS_MAIN,12,4,0,TXT_SDW_SHIP,TXT_SDW_SHIP_LEN,SHADOW},
  //LARGE SHIP---ENEMY ALERT
  {STATUS_MAIN,13,4,3,TXT_ENEMY,TXT_ENEMY_LEN,CAPTAIN},
  //LARGE SHIP---NURSE THANKS
  {STATUS_MAIN,15,4,3,TXT_NSE_THX,TXT_NSE_THX_LEN,NURSE},
  //LARGE SHIP---SHADOW RESPONSE
  {STATUS_MAIN,16,4,3,TXT_SDW_RETURN,TXT_SDW_RETURN_LEN,SHADOW},
  //LARGE SHIP---NURSE SUSPICIOUS (BUT JOINS)
  {STATUS_MAIN,17,4,3,TXT_NSE_SUSPICIOUS,TXT_NSE_SUSPICIOUS_LEN,NURSE},
  //HOSPITAL---NURSE CHAOS COMMENT
  {STATUS_MAIN,18,6,0,TXT_NSE_CHAOS,TXT_NSE_CHAOS_LEN,NURSE},
  {STATUS_MAIN,18,7,0,TXT_NSE_CHAOS,TXT_NSE_CHAOS_LEN,NURSE},
  //HOSPITAL---MADMAN ESCAPED COMMENT
  {STATUS_MAIN,19,6,8,TXT_MAD_ESCAPED,TXT_MAD_ESCAPED_LEN,MADMAN},
  {STATUS_MAIN,19,7,8,TXT_MAD_ESCAPED,TXT_MAD_ESCAPED_LEN,MADMAN},
  //HOSPITAL---NURSE WHY
  {STATUS_MAIN,20,6,8,TXT_NSE_WHY,TXT_NSE_WHY_LEN,NURSE},
  {STATUS_MAIN,20,7,8,TXT_NSE_WHY,TXT_NSE_WHY_LEN,NURSE},
  //HOSPITAL---MADMAN OFFER
  {STATUS_MAIN,21,6,8,TXT_MAD_OFFER,TXT_MAD_OFFER_LEN,MADMAN},
  {STATUS_MAIN,21,7,8,TXT_MAD_OFFER,TXT_MAD_OFFER_LEN,MADMAN},
  //HOSPITAL---NURSE SAYING PLAGUE SPREADS
  {STATUS_MAIN,22,6,8,TXT_NSE_SPREAD,TXT_NSE_SPREAD_LEN,NURSE},
  {STATUS_MAIN,22,7,8,TXT_NSE_SPREAD,TXT_NSE_SPREAD_LEN,NURSE},
  //HOSPITAL---MADMAN MISHAP
  {STATUS_MAIN,23,6,8,TXT_MAD_MISHAP,TXT_MAD_MISHAP_LEN,MADMAN},
  {STATUS_MAIN,23,7,8,TXT_MAD_MISHAP,TXT_MAD_MISHAP_LEN,MADMAN},
  //HOSPITAL---NURSE MONSTER
  {STATUS_MAIN,24,6,8,TXT_NSE_MONSTER,TXT_NSE_MONSTER_LEN,NURSE},
  {STATUS_MAIN,24,7,8,TXT_NSE_MONSTER,TXT_NSE_MONSTER_LEN,NURSE},
  //HOSPITAL---NURSE CONFRONT
  {STATUS_MAIN,26,6,8,TXT_NSE_CONFRONT,TXT_NSE_CONFRONT_LEN,NURSE},
  {STATUS_MAIN,26,7,8,TXT_NSE_CONFRONT,TXT_NSE_CONFRONT_LEN,NURSE},
  //TOWER---SHADOW WARNING
  {STATUS_MAIN,27,10,0,TXT_SDW_TOWER,TXT_SDW_TOWER_LEN,SHADOW},
  {STATUS_MAIN,27,11,0,TXT_SDW_TOWER,TXT_SDW_TOWER_LEN,SHADOW},
  //TOWER---LEADER SNEER
  {STATUS_MAIN,28,10,24,TXT_LDR_ANTS,TXT_LDR_ANTS_LEN,LEADER},
  {STATUS_MAIN,28,11,24,TXT_LDR_ANTS,TXT_LDR_ANTS_LEN,LEADER},
  //TOWER---NURSE RETRIBUTION
  {STATUS_MAIN,29,10,24,TXT_NSE_PAY,TXT_NSE_PAY_LEN,NURSE},
  {STATUS_MAIN,29,11,24,TXT_NSE_PAY,TXT_NSE_PAY_LEN,NURSE},
  //TOWER---LEADER SNIDE EVIL REPLY
  {STATUS_MAIN,30,10,24,TXT_LDR_CLEAN,TXT_LDR_CLEAN_LEN,LEADER},
  {STATUS_MAIN,30,11,24,TXT_LDR_CLEAN,TXT_LDR_CLEAN_LEN,LEADER},
  //TOWER---NURSE NOBLE COMEBACK
  {STATUS_MAIN,31,10,24,TXT_NSE_DESTROY,TXT_NSE_DESTROY_LEN,NURSE},
  {STATUS_MAIN,31,11,24,TXT_NSE_DESTROY,TXT_NSE_DESTROY_LEN,NURSE},
  //TOWER---SHADOW VICTORY
  {STATUS_MAIN,33,10,24,TXT_SDW_VICTORY,TXT_SDW_VICTORY_LEN,SHADOW},
  {STATUS_MAIN,33,11,24,TXT_SDW_VICTORY,TXT_SDW_VICTORY_LEN,SHADOW},
  //TOWER---NURSE VICTORY
  {STATUS_MAIN,34,10,24,TXT_NSE_VICTORY,TXT_NSE_VICTORY_LEN,NURSE},
  {STATUS_MAIN,34,11,24,TXT_NSE_VICTORY,TXT_NSE_VICTORY_LEN,NURSE},
  //TOWER---ENDING TEXT
  {STATUS_MAIN,35,10,24,TXT_ENDING,TXT_ENDING_LEN,5},
  {STATUS_MAIN,35,11,24,TXT_ENDING,TXT_ENDING_LEN,5},
};

#define NUM_BOSS_EVENTS 6
const boss_event boss_events[NUM_BOSS_EVENTS] PROGMEM = {
  //CATPAW---SLAVER BOSS
  {STATUS_MAIN,3,SLAVER},
  //CATPAW---SHADOW BOSS
  {STATUS_MAIN,6,EN_SHADOW},
  //FATHER'S RESIDENCE---BRUISER BOSS
  {STATUS_MAIN,10,BRUISER},
  //LARGE SHIP---CAPTAIN BOSS
  {STATUS_MAIN,14,CAPTAIN},
  //HOSPITAL---MADMAN BOSS
  {STATUS_MAIN,25,MADMAN},
  //TOWER---LEADER FINAL BOSS
  {STATUS_MAIN,32,LEADER},
};

void check_events(){
  uint8_t i,j;
  uint8_t* tmp;
  struct dialogue_event event;
  struct boss_event bevent;
  for( i = 0; i < NUM_DIALOGUE_EVENTS; i++ ){
    tmp = (uint8_t*)&dialogue_events[i];
    // Load our local variable with this entry
    for( j = 0; j < 8; j++ ){
      //Assume the byte layout in memory to read bytes
      *(((uint8_t*)&event)+j) = pgm_read_byte(tmp + j);
    }
    // If this event is active (correct status value, dungeon, and dungeon floor)
    if( game_status[event.status_index] == event.status_value && dungeonid == event.dungeon_id && dungeon_level == event.dungeon_level ){
      //Special case: shadow joins party
      if( game_status[event.status_index] == 7 ){
        party[SHADOW].level = 8;//Add shadow to party
      }
      if( game_status[event.status_index] == 17 ){
        party[NURSE].level = 10;//Add nurse to party
      }
      game_status[event.status_index]++;// Increment status to next state
      // Take advantage of having no battles with low-level enemies
      // Therefore, if the indices that we use of each array don't overlap,
      // we can avoid having to specify which array we are using
      if( event.name_index < 6 ){
        display_dialogue(event.dialogue_index,event.dialogue_len,event.name_index,player_names);
      }else{
        display_dialogue(event.dialogue_index,event.dialogue_len,event.name_index,enemy_names);
      }
      return;
    }
  }
  for( i = 0; i < NUM_BOSS_EVENTS; i++ ){
    tmp = (uint8_t*)&boss_events[i];
    // Load our local variable with this entry
    for( j = 0; j < 3; j++ ){
      //Assume the byte layout in memory to read bytes
      *(((uint8_t*)&bevent)+j) = pgm_read_byte(tmp + j);
    }
    // If this boss event is active (correct status value only)
    if( game_status[bevent.status_index] == bevent.status_value ){
      game_status[bevent.status_index]++;
      meta_mode = bevent.boss_id;//Boss id stored in meta_mode
      mode = COMBAT;
      return;
    }
  }
}

