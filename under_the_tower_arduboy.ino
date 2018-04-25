//#include <SPI.h>
//Use for PROGMEM
//#include <avr/pgmspace.h>
#include "overworld.h"
#include "save.h"
#include "dialogue.h"
#include "battle.h"
#include "dungeon.h"
#include "events.h"
#include <Arduboy2.h>
Arduboy2 gb; //Replacing Gamebuino object with Arduboy2 object

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define WORLD 0
#define COMBAT 1
#define DUNGEON 2
#define DIALOGUE 3
//Transitions to world or dungeon modes
#define TO_WORLD 4
#define TO_COMBAT 5
#define TO_DUNGEON 6
//Menu mode
#define MAIN_MENU 7
#define PAUSE_MENU 8
#define GAME_OVER 9
#define YOU_WIN 10

#define TRANSITION_DIFF 4

byte mode = WORLD;

void setup() {
  // put your setup code here, to run once:
  gb.begin();
  gb.setFrameRate(25);
  gb.invert(true);//Make white the predominant color
  //gb.titleScreen(F("Test"));
  //gb.battery.show = false;
  mode = MAIN_MENU;

  /*for(byte i = 0; i < 16; i++){
    for(byte j = 0; j < 16; j++){
      map_cache[i][j] = pgm_read_byte(&world[i*64+j]);
    }
  }*/
}

void step_transition(){
  uint8_t i;
  for(i = 0; i < SCREEN_HEIGHT/2+1 - abs(transition); i++ ){
    gb.drawFastVLine(i,0,SCREEN_HEIGHT);
    gb.drawFastVLine(SCREEN_WIDTH-i,0,SCREEN_HEIGHT);
    gb.drawFastHLine(0,i,SCREEN_WIDTH);
    gb.drawFastHLine(0,SCREEN_HEIGHT-i,SCREEN_WIDTH);
  }
  transition+=4;
  //If we are halfway into the transition, start drawing the next scene
  //And stop saving the last frame of the previous scene
  if( transition >= 0 ){
    persistence = false;
  }
  //If we are done with the transition, move to the ordinary non-transition mode
  if( transition > SCREEN_HEIGHT/2 ){
    mode -= TRANSITION_DIFF;
  }
}

void print_progress(){
  uint16_t progress = 0;
  for( uint8_t i = 0; i < 6; i++ ){
    progress += game_status[i];
  }
  progress = (100*progress + (36+3+4+4+4+4)/2)/(36+3+4+4+4+4);
  gb.setCursor(SCREEN_WIDTH/2-2*6, SCREEN_HEIGHT-8);
  gb.print(progress);
  gb.print(F("%"));
}

void loop() {
  if(gb.nextFrame()){
    if( !persistence ){
      gb.clear();
    }
    gb.pollButtons();
    
    //Set common values and tick animation frames regardless of mode, to save space by avoiding duplication between modes
    gb.setCursor(0, 6);
  
    dudeframe++;
    dudeframe%=7;

    worldframe++;
    worldframe%=8;
    
    switch( mode ){
      case TO_WORLD:
        step_transition();
      case WORLD:
        if( transition >= 0 ){
          draw_world();
          step_world();
          if( game_status[STATUS_MAIN] == -1 ){
            game_status[STATUS_MAIN] = 0;
            display_dialogue(TXT_INTRO,TXT_INTRO_LEN,5,player_names);
          }
          else if( game_status[STATUS_MAIN] == 0 && dudex < 7*8 ){
            game_status[STATUS_MAIN] = 1;
            display_dialogue(TXT_SDW_INTRO,TXT_SDW_INTRO_LEN,SHADOW,player_names);
          }else if( game_status[STATUS_MAIN] == 1 && dudey < 42*8 ){
            game_status[STATUS_MAIN] = 2;
            display_dialogue(TXT_SDW_CATPAW,TXT_SDW_CATPAW_LEN,SHADOW,player_names);
          }/*else if( game_status[STATUS_MAIN] == 12 && dudex > 55*8 && dudey < 45*8 ){
            game_status[STATUS_MAIN] = 13;
            display_dialogue(TXT_SDW_SHIP,TXT_SDW_SHIP_LEN,SHADOW,player_names);
          }*/
        }
        break;
      case TO_DUNGEON:
        step_transition();
      case DUNGEON:
        if( transition >= 0 ){
          draw_dungeon();
          step_dungeon();

          check_events();//Dialogue and boss battles encountered in dungeons
        }
        break;
      case TO_COMBAT:
        if( transition >= 0 ){
          do_combat();//Draw first to avoid the text overdrawing the transition
        }
        step_transition();
        break;
      case COMBAT:
        if( transition >= 0 ){
          do_combat();
        }
        break;
      case DIALOGUE:
        if( meta_mode == WORLD )
          draw_world();
        else
          draw_dungeon();
        step_dialogue();
        break;
      case MAIN_MENU:
        // Draw tower on right
        for( uint8_t i = 0; i < 8; i++ ){
          uint8_t tile = 38;
          for( uint8_t j = 0; j < 5; j++ ){
            // Draw windows every other row at 5th position
            if( j == 4 && i % 2 == 1 ){
              tile = 11;
            }
            // If we are no longer drawing the curved wall, draw normal wall
            else if( j > 2 ){
              tile = 27;
            }
            gb.drawSlowXYBitmap( SCREEN_WIDTH - 5*8 + j*8, i*8, &tiles[tile*8], 8, 8 );
          }
        }
        //Make background behind text black
        gb.fillRect(0,0,128 - 5*8,64);
        gb.setTextColor(BLACK);
        gb.setTextBackground(WHITE);
        gb.setCursor(6, 0);
        gb.print(F("UNDER\n      THE\n         TOWER"));
        gb.setCursor(2*6, SCREEN_HEIGHT/2);
        gb.println(F("NEW"));
        gb.setCursor(2*6, gb.getCursorY());
        gb.println(F("LOAD"));
        gb.setCursor(2*6, gb.getCursorY());
        gb.print(F("QUIT"));
        gb.setCursor(1*6, SCREEN_HEIGHT/2);
        if(menu_selection == 1){
          gb.setCursor(1*6, SCREEN_HEIGHT/2+8);        
        }
        if(menu_selection == 2){
          gb.setCursor(1*6, SCREEN_HEIGHT/2+16);         
        }
        gb.print(F("\20"));
        if(gb.justPressed(UP_BUTTON)){
          menu_selection--;
          if( menu_selection == 255 ) menu_selection = 2;
        }
        else if(gb.justPressed(DOWN_BUTTON)){
          menu_selection++;
          menu_selection%=3;
        }
        else if(gb.justPressed(A_BUTTON)){
          gb.initRandomSeed();//For random numbers, later
          if(menu_selection == 1){
            restore_game();
          }
          else if(menu_selection == 2){
            //gb.exitToBootloader(); // Isn't found?
          }
          else{
            mode = WORLD;
          }
        }
        break;
      case PAUSE_MENU:
        gb.setCursor(SCREEN_WIDTH/2-3*6, gb.getCursorY());
        gb.println(F("PAUSED"));
        gb.setCursor(1*6, gb.getCursorY());
        gb.print(F("FIND "));
        if( game_status[STATUS_MAIN] == 0 ){
          gb.print(F("A  BETTER LIFE"));
        }else if( game_status[STATUS_MAIN] <= 2 ){
          gb.print(F("GIRL AT CATPAW"));
        }else if( game_status[STATUS_MAIN] <= 8 ){
          gb.print(F(" GIRL'S  HOUSE"));
        }else if( game_status[STATUS_MAIN] <= 9 ){
          gb.print(F(" GIRL'S FATHER"));
        }else if( game_status[STATUS_MAIN] <= 12 ){
          gb.print(F(" A   BIG  SHIP"));
        }else if( game_status[STATUS_MAIN] <= 15 ){
          gb.print(F("   THE   NURSE"));
        }else if( game_status[STATUS_MAIN] <= 18 ){
          gb.print(F(" THE  HOSPITAL"));
        }else if( game_status[STATUS_MAIN] <= 26 ){
          gb.print(F("THE MAD DOCTOR"));
        }else if( game_status[STATUS_MAIN] <= 27 ){
          gb.print(F("   THE   TOWER"));
        }else if( game_status[STATUS_MAIN] <= 35 ){
          gb.print(F("  THE   LEADER"));
        }
        gb.setCursor(SCREEN_WIDTH/2-2*6, SCREEN_HEIGHT/2);
        gb.println(F("BACK"));
        if( meta_mode == WORLD ){
          gb.setCursor(SCREEN_WIDTH/2-2*6, gb.getCursorY());
          gb.print(F("SAVE"));
        }else{ //We are in a dungeon
          //Print the floor of the dungeon the player is on
          gb.setCursor(SCREEN_WIDTH/2-7*6, SCREEN_HEIGHT-16);
          gb.print(F("FLOOR "));
          if( dungeon_level < 9 ) gb.print(0);
          gb.print( dungeon_level + 1 );
          gb.print(F(" OF "));
          if( pgm_read_byte(&(dungeons[dungeonid].size)) < 10 ) gb.print(0);
          gb.print( pgm_read_byte(&(dungeons[dungeonid].size)) );
        }
        gb.setCursor(SCREEN_WIDTH/2-3*6, SCREEN_HEIGHT/2);
        if(menu_selection == 1){
          gb.setCursor(SCREEN_WIDTH/2-3*6, SCREEN_HEIGHT/2 + 8);          
        }
        gb.print(F("\20"));
        print_progress();
        if(meta_mode == WORLD && gb.justPressed(UP_BUTTON)){
          menu_selection--;
          if( menu_selection == 255 ) menu_selection = 1;
        }
        else if(meta_mode == WORLD && gb.justPressed(DOWN_BUTTON)){
          menu_selection++;
          menu_selection%=2;
        }
        else if(gb.justPressed(A_BUTTON)){
          if(menu_selection == 1){
            save_game();
          }
          mode = meta_mode;
        }
        break;
      case GAME_OVER:
        gb.setCursor(SCREEN_WIDTH/2-4*6, gb.getCursorY());
        gb.print(F("GAME OVER"));
        gb.setCursor(SCREEN_WIDTH/2-3*6, SCREEN_HEIGHT/2);
        gb.print(F("\20LOAD"));
        if(gb.justPressed(A_BUTTON)){
          restore_game();
        }
        break;
      case YOU_WIN:
        gb.setCursor(SCREEN_WIDTH/2-3*6-3, gb.getCursorY());
        gb.print(F("YOU WIN"));
        print_progress();
    }

    if( (mode == WORLD || mode == DUNGEON) && gb.justPressed(B_BUTTON) ){ // Was C button for Gamebuino, but A and B aren't used outside battles
      menu_selection = 0;
      meta_mode = mode;
      mode = PAUSE_MENU;
    }
    gb.display();
  }
}
