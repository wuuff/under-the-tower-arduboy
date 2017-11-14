#include "dialogue.h"
#include "battle.h"

const uint8_t huff_tree[][3] PROGMEM = {
{255,1,28,},
{255,2,17,},
{255,3,16,},
{255,4,15,},
{255,5,8,},
{255,6,7,},
{'V',0,0,},
{'C',0,0,},
{255,9,14,},
{255,10,13,},
{255,11,12,},
{'J',0,0,},
{'?',0,0,},
{'K',0,0,},
{'M',0,0,},
{'O',0,0,},
{'E',0,0,},
{255,18,25,},
{255,19,20,},
{'I',0,0,},
{255,21,24,},
{255,22,23,},
{'B',0,0,},
{'G',0,0,},
{'U',0,0,},
{255,26,27,},
{'H',0,0,},
{'A',0,0,},
{255,29,40,},
{255,30,35,},
{255,31,34,},
{255,32,33,},
{'\x00',0,0,},
{'D',0,0,},
{'S',0,0,},
{255,36,39,},
{255,37,38,},
{'L',0,0,},
{'N',0,0,},
{'T',0,0,},
{255,41,52,},
{255,42,49,},
{255,43,46,},
{255,44,45,},
{'P',0,0,},
{'W',0,0,},
{255,47,48,},
{'F',0,0,},
{'Y',0,0,},
{255,50,51,},
{'R',0,0,},
{'\n',0,0,},
{' ',0,0,},
};

const uint8_t dialogue[] PROGMEM = {
0xb6,0x49,0xe0,0xa5,0xe7,0xd2,0x77,0xe3,0x9a,0x55,0x58,0x2a,0xf6,0x67,0xc9,0x7a,0x18,0xef,0xc5,0x67,0xd8,0xef,0xe1,0x47,0x55,0x66,0x9,0x73,0xf4,0xba,0x1d,0x4f,0x97,0xc8,0xef,0xb2,0x2a,0xdd,0xd4,0x10,0xf,0x4a,0xef,0xdb,0x1f,0x63,0x89,0xd4,0x31,0x64,0xa1,0xf6,0xc7,0xe0,0x23,0xad,0xf9,0x5,0xc0,0x35,0x54,0xf1,0xae,0xf8,0x6b,0x8f,0xca,0x8f,0x73,0xd4,0xcf,0x7e,0xd8,0xfd,0x20,0x7,0x50,0xb6,0x39,0xf7,0xd1,0xe1,0x6a,0x38,0xd7,0x7d,0xe7,0x86,0xb8,0xd1,0xf4,0x16,0x61,0x6c,0x93,0xd2,0x7b,0xa8,0x2b,0xbd,0xf1,0xa9,0xe3,0x97,0xb6,0x32,0x77,0xed,0x9e,0xfd,0x10,0x3,0x30,0x5d,0x62,0x75,0xed,0x8f,0xb1,0xc4,0xea,0x9,0xd9,0xc0,0x3c,0x54,0x93,0xa0,0xc,0x77,0xf2,0xd0,0x87,0xdf,0x27,0xd6,0xfe,0x62,0xbd,0x79,0xa,0x94,0xa4,0x13,0xb3,0x80,0x7b,0xfb,0x79,0xb,0xbf,0x6c,0xf7,0xf1,0x4a,0x53,0xe0,0xf9,0xef,0xbf,0x65,0xd6,0x3a,0x31,0xc8,0x69,0x18,0x28,0xbb,0xf9,0x26,0xa6,0xfe,0x62,0xbd,0xf0,0xd7,0x37,0xf0,0xd0,0x80,0x7a,0x6f,0x82,0xc3,0x27,0xe2,0x92,0x69,0x9c,0x24,0x90,0xbe,0xd8,0xf0,0x5e,0xf0,0x7c,0x77,0xdf,0xe1,0x47,0x4,0xf1,0xcb,0x7e,0x24,0x17,0x89,0xa8,0x26,0xf,0xd5,0x4d,0x53,0xa4,0xf6,0x34,0x8e,0xfa,0x82,0xba,0xc7,0xe2,0x96,0xc9,0x58,0x65,0xa2,0x7b,0x1d,0x77,0xac,0x77,0xd4,0xd2,0x55,0x5e,0xc7,0x5e,0xc7,0x7d,0x8e,0xbe,0x4f,0x6c,0x75,0xb,0x63,0xc1,0x7b,0xc1,0xf1,0xdf,0xa2,0x19,0xf5,0x1d,0x5b,0x43,0x31,0x5f,0x8b,0xe8,0xfb,0x1d,0xf4,0xad,0x9d,0x64,0x74,0x7a,0x57,0x7c,0x3c,0xfa,0x8b,0x94,0xa9,0x99,0x9,0x85,0xb3,0xd4,0x2f,0xcc,0x57,0x4,0xf8,0xbc,0xf7,0xcb,0x4e,0x91,0xdf,0xc8,0x75,0xc3,0xcf,0xd1,0x32,0x30,0xf,0x3f,0x93,0xdb,0x1d,0x7a,0x20,0x6,0x77,0xde,0xfd,0xb1,0xf1,0x10,0x42,0xce,0xfd,0x8f,0xb6,0x3e,0x45,0x76,0xd0,0x40,0xf0,0xd1,0x99,0x40,0xf,0x51,0x77,0xbf,0x51,0xc7,0xe6,0x2b,0xe1,0xae,0x6f,0x7f,0x7,0x99,0xe1,0xe7,0xec,0xcd,0xc3,0x13,0x4a,0x78,0x8d,0x4e,0xfa,0x79,0x67,0xa5,0x38,0x40,0xa5,0x77,0xf3,0x15,0xf4,0xaf,0x51,0xee,0xe8,0x61,0x44,0x9b,0x35,0xdf,0xb6,0x5a,0xb3,0xd8,0x69,0x1d,0xfc,0x9e,0xd8,0xeb,0xba,0x82,0x1,0x86,0x2c,0x3d,0x51,0x33,0xed,0x8e,0x88,0x4c,0x13,0xb8,0x7d,0x2b,0x12,0xa5,0x98,0xef,0xe6,0x6f,0xa7,0x79,0xb,0xbe,0x18,0xe8,0xf1,0xcb,0xe6,0x2b,0x80,0x79,0xf3,0x48,0x99,0xbd,0xf8,0xba,0xd5,0x6b,0x3a,0xe9,0x3b,0xe1,0x52,0x35,0x7c,0x30,0x31,0xf6,0x23,0x9,0x63,0xc2,0xd4,0x71,0x9e,0x39,0x6f,0xc9,0x7,0x46,0xe7,0xdb,0x1c,0xf7,0xf1,0x7a,0xdf,0x64,0x8c,0x4d,0x61,0x85,0xb,0xc9,0xea,0x8f,0xb1,0xdf,0xb6,0x3d,0x44,0x57,0xcb,0x26,0x1b,0xe9,0x5f,0x6c,0x7b,0x3e,0x94,0x1d,0x42,0xd9,0x27,0xcb,0x26,0x1d,0x27,0x7f,0x16,0x3a,0x3d,0x92,0x77,0xe2,0xeb,0x55,0xac,0xeb,0xa4,0xc2,0x58,0xfc,0x5e,0x7b,0xfa,0xaf,0x52,0x77,0xde,0xfd,0xb1,0xe0,0xa5,0xe7,0xbe,0xc3,0x38,0x25,0xbd,0x3e,0x2c,0x6b,0x9,0x63,0xf2,0x15,0xd6,0x3b,0xef,0xe4,0x83,0xa3,0x7e,0xc7,0x7e,0xd8,0xfc,0x28,0xea,0xac,0xc0,0x0,
};

uint16_t huff_index = 0;
uint8_t huff_tree_index = 0;
uint8_t huff_mask = 0;

uint8_t huff_tree_get(uint8_t item){
  return pgm_read_byte((uint8_t*)&huff_tree[huff_tree_index][item]);
}

void fill_dialogue_buffer(uint16_t seek_index){
  uint8_t tmp, offset = 0;
  while( true ){
    tmp = pgm_read_byte((uint8_t*)&dialogue[huff_index]);
    //Read a single bit
    if( (tmp & huff_mask) == 0 ){
      // If bit was zero, go to left node
      huff_tree_index = huff_tree_get(1);
    }else{
      // If bit was one, go to right node
      huff_tree_index = huff_tree_get(2);
    }
    //If we are at a leaf node, we have a complete code
    tmp = huff_tree_get(0);
    if( tmp != 255 ){
      // If we're still seeking to our desired start location
      if( seek_index > 0 ){
        seek_index--;
      }else{
        combat_message[offset++] = tmp;
        //If the character we just read was a zero byte, we are done loading the buffer
        if( tmp == '\0' ){
          return;
        }
      }
      huff_tree_index = 0;// Return to root
    }
    //Advance to next bit
    huff_mask >>= 1; //Shift mask
    if( huff_mask == 0 ){
      //If mask has read every bit, it's time to shift to the next byte
      huff_index++;
      huff_mask = 0x80;
    }
  }
}

void display_dialogue(uint16_t index, uint8_t len, uint8_t who, const char name_list[][8]){
  meta_mode = mode;
  dialogue_index = index;
  dialogue_remaining = len;
  copy_to_buffer(who,name_list);
  huff_mask = 0x80;
  huff_index = 0;
  huff_tree_index = 0;
  // Seek to index (from start!) and
  // fill dialogue buffer with first set of dialogue
  fill_dialogue_buffer(dialogue_index);
  mode = DIALOGUE;
}

uint16_t dialogue_index;
uint8_t dialogue_remaining;

void step_dialogue(){
  worldframe++;
  worldframe%=8;
  gb.display.setColor(WHITE);
  gb.display.fillRect(0,SCREEN_HEIGHT/2-1,SCREEN_WIDTH,SCREEN_HEIGHT/2+1);
  gb.display.setColor(BLACK);
  gb.display.drawRect(0,SCREEN_HEIGHT/2-1,SCREEN_WIDTH,SCREEN_HEIGHT/2+1);
  
  gb.display.cursorX = 1;
  gb.display.cursorY = SCREEN_HEIGHT/2;
  //If the first char is a zero, then no character is speaking, so skip this
  //so that narration gets four lines to work with
  if( combat_buffer[0] != 0 ){
    gb.display.println(combat_buffer);//Display name of speaker, set before this
  }
  gb.display.cursorX = 4;
  gb.display.print(combat_message);

  if(gb.buttons.pressed(BTN_A)){
    gb.sound.playOK();
    if( dialogue_remaining == 0 ){
      // If dialogue is done, return to world mode
      mode = meta_mode;
    }else{
      // If dialogue is not done, move to next chunk of text
      dialogue_remaining--;
      // This time we fill the dialogue buffer we will start from the end of the
      // previous dialogue
      fill_dialogue_buffer(0);
    }
  }
}

