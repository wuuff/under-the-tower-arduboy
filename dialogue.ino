#include "dialogue.h"
#include "battle.h"

const uint8_t huff_tree[][3] PROGMEM = {
{255,1,24,},
{255,2,15,},
{255,3,4,},
{'E',0,0,},
{255,5,14,},
{255,6,7,},
{'Y',0,0,},
{255,8,13,},
{255,9,12,},
{255,10,11,},
{'J',0,0,},
{'?',0,0,},
{'V',0,0,},
{'G',0,0,},
{'I',0,0,},
{255,16,19,},
{255,17,18,},
{'S',0,0,},
{'O',0,0,},
{255,20,23,},
{255,21,22,},
{'D',0,0,},
{'L',0,0,},
{'H',0,0,},
{255,25,46,},
{255,26,33,},
{255,27,28,},
{'A',0,0,},
{255,29,30,},
{'U',0,0,},
{255,31,32,},
{'C',0,0,},
{'F',0,0,},
{255,34,41,},
{255,35,36,},
{'\x00',0,0,},
{255,37,38,},
{'P',0,0,},
{255,39,40,},
{'K',0,0,},
{'B',0,0,},
{255,42,43,},
{'N',0,0,},
{255,44,45,},
{'M',0,0,},
{'W',0,0,},
{255,47,48,},
{' ',0,0,},
{255,49,50,},
{'T',0,0,},
{255,51,52,},
{'\n',0,0,},
{'R',0,0,},
};

const uint8_t dialogue[] PROGMEM = {
0xe7,0x34,0xd3,0x1f,0x13,0x1a,0x7b,0x30,0x87,0x62,0xe8,0x5c,0x70,0x4c,0x82,0x1a,0x19,0xec,0xc9,0xd,0xcb,0xed,0x53,0x60,0xb9,0xa,0x1f,0x26,0xfc,0x9a,0x3e,0x99,0x22,0x71,0xec,0xe6,0x5b,0xe8,0xae,0xa5,0x46,0x3b,0x7b,0x73,0x8d,0xcb,0x78,0xfd,0x2f,0x73,0x68,0xdc,0xe3,0x54,0xab,0xff,0x64,0x9a,0xa,0x8b,0x16,0x32,0xdb,0xda,0xe9,0x33,0x4e,0xd8,0xe4,0xd5,0xc9,0xed,0xce,0x37,0xcc,0xa8,0xfd,0x39,0xc1,0x34,0x7c,0x6a,0xd6,0x5b,0xed,0xed,0x9,0xae,0x93,0x1b,0x1f,0xac,0x94,0xe7,0x34,0xc6,0x9a,0x2b,0xac,0xbb,0xd9,0x6c,0x32,0xcf,0xb9,0xc2,0xf,0x6e,0x78,0xec,0xd3,0x2a,0x12,0x92,0xb3,0x7,0xf7,0x38,0xdc,0xb7,0x8f,0xd0,0xf3,0xc1,0x51,0x96,0xba,0xf,0x95,0xc,0xf6,0x9f,0xeb,0x76,0x89,0xe3,0xfe,0xc4,0x59,0x7f,0x25,0x63,0x6b,0x68,0x79,0xe0,0xa8,0xd1,0xba,0x12,0xb7,0xb7,0x3c,0x76,0xbc,0xda,0xdd,0x54,0x13,0xda,0x33,0xca,0xcc,0xf8,0x64,0xea,0xd6,0x52,0xbc,0xbb,0x4e,0x7f,0x4e,0xc4,0x59,0x7b,0x5d,0x24,0xed,0x57,0xd4,0xa8,0xc7,0xed,0x33,0xaa,0xd,0x79,0xa0,0x69,0x28,0x80,0x56,0xdc,0xe3,0x4d,0x1d,0x54,0x5f,0xed,0x1a,0xa6,0xc4,0xc3,0x2c,0xfe,0xcc,0x13,0x43,0x5,0xa6,0x14,0x8c,0x59,0xfd,0xb8,0xd3,0x38,0x6b,0x3d,0xab,0xac,0xac,0xcd,0x79,0xf3,0x9d,0xa9,0x3f,0xc0,0xce,0x3f,0xa2,0xcc,0xf6,0xaf,0xf3,0xb1,0x79,0xc7,0xf7,0x2f,0xb3,0x8f,0xe9,0xe3,0x9c,0x7e,0x9c,0xe3,0x4d,0x1d,0x54,0x5f,0xec,0xd3,0x9,0xac,0xbf,0xe7,0xa1,0x16,0x59,0x91,0xf1,0xb9,0x7d,0x8e,0xdc,0x3f,0x38,0xf8,0xc7,0x6f,0x6b,0x89,0xab,0xc9,0xe,0xc1,0x10,0xa6,0x9c,0xf1,0x6a,0xd8,0x8b,0x2a,0x1e,0xbe,0x13,0x44,0xff,0x83,0x67,0xb4,0xeb,0xfd,0x71,0x33,0x4e,0x71,0x4b,0x89,0xa7,0x8e,0x71,0xfc,0xd3,0x2a,0x13,0xda,0x3b,0x73,0x8c,0xc5,0x9a,0xb2,0x7b,0x72,0xee,0x71,0x91,0x65,0xcf,0x43,0xba,0xaf,0x84,0x43,0x2a,0x35,0x79,0x77,0xb5,0x96,0xfc,0x45,0x96,0xba,0x49,0xde,0xd5,0x42,0x26,0xb8,0x9b,0x82,0x75,0x2f,0xd,0x6e,0x62,0xd8,0x7b,0x1e,0x47,0x86,0xb7,0x14,0x29,0xdb,0xd8,0x8b,0x2c,0x76,0xd5,0xe3,0xb9,0xa2,0x8d,0x34,0xe1,0x6f,0x6e,0x79,0x16,0x99,0xd5,0xac,0xf6,0x9e,0x39,0xc7,0xf4,0x57,0x52,0xa2,0x97,0xba,0xe2,0xd4,0x26,0xe7,0x1f,0x5,0x34,0x3d,0x17,0x63,0xb3,0x5,0x7e,0xc,0xf6,0x20,0xec,0x7a,0x12,0xb7,0xb5,0xcb,0xf1,0x96,0x7c,0x45,0x95,0x2e,0x26,0xd,0x60,0x4e,0xf6,0x64,0x48,0xb7,0xe1,0xfc,0x69,0xed,0x58,0xd9,0x68,0xaa,0xa0,0xcd,0xca,0xb4,0x47,0x1a,0xb5,0x96,0xf4,0xcb,0x3f,0xb2,0x9,0xbe,0x39,0x37,0x38,0x27,0xb5,0xf1,0x6e,0xce,0x6c,0x60,0xb5,0x2a,0x68,0x84,0x18,0xb5,0xdc,0xbe,0xdc,0xe3,0x57,0x32,0xf2,0x39,0xd5,0xec,0x76,0xdc,0xe3,0x3c,0x7e,0xba,0xfe,0x9c,0xe6,0x99,0x1c,0xea,0xc6,0x9e,0xd7,0xb8,0xf8,0xce,0x69,0xec,0xc8,0x91,0x6f,0xc3,0xf8,0xd2,0x88,0xe3,0x5f,0x9,0xa3,0x5a,0x5f,0x41,0xed,0x1d,0xb9,0xc6,0x98,0xf8,0x9e,0xce,0xa9,0x51,0xf4,0x37,0x5e,0xe2,0xd4,0x47,0x1a,0x75,0x95,0x99,0xed,0x19,0x4,0xdf,0x1d,0xb9,0x7d,0xb9,0xc6,0xa9,0xb0,0x5c,0x85,0x39,0xe2,0xd5,0xb1,0x16,0x54,0x3d,0x74,0x93,0xb7,0xc7,0x4b,0xf6,0xdc,0xbe,0xdc,0xe3,0x3a,0xa5,0x47,0xd0,0xda,0x73,0x8c,0xe2,0x19,0x98,0xb3,0x72,0xff,0xd9,0xe1,0x31,0x6b,0x61,0xae,0x86,0x51,0xc6,0xba,0x18,0x37,0x38,0xd5,0x36,0xb,0x90,0xf6,0x8b,0x33,0x1e,0xba,0x49,0xde,0xd3,0x9d,0x99,0x96,0x5d,0xaf,0x72,0x52,0xf1,0xaf,0x36,0xb7,0x38,0x6d,0x5e,0xc4,0x59,0x6f,0x8e,0x97,0xed,0xb9,0xc7,0xc5,0xf,0x31,0x75,0x97,0xb7,0x7e,0x49,0xde,0xc4,0x59,0x6a,0xf2,0xec,0x79,0xe0,0xa8,0xf6,0xb2,0xe9,0x9d,0x4e,0x61,0x4e,0x71,0x9d,0x52,0xa3,0xe8,0x6f,0xb1,0xa6,0xb2,0xff,0x9e,0x9c,0xe6,0x9a,0xa6,0xc4,0xc3,0x1a,0x7b,0x4c,0xf0,0xa9,0x4b,0xde,0x3b,0x3c,0x26,0x71,0xec,0xc5,0xb0,0x29,0xa2,0x2e,0x22,0xcb,0x4,0x9a,0x2a,0xc,0xa5,0xee,0x4d,0x1f,0x18,0x8b,0x2f,0x66,0x29,0xd8,0xbd,0xce,0x68,0x53,0x45,0x97,0xf1,0x7f,0x11,0xd9,0xa2,0x18,0x3f,0xed,0x74,0x30,0x68,0xb6,0x59,0xe7,0x1f,0xa1,0xe9,0x96,0x4d,0x66,0xb2,0xf6,0xf8,0x43,0x4e,0xa7,0x38,0xd5,0x36,0xb,0x90,0xf6,0x34,0xc9,0x57,0xc4,0x30,0xec,0x5d,0x23,0x5c,0x68,0xf1,0x55,0xf,0xb5,0xf0,0x99,0x6c,0xd2,0x7b,0x4e,0xbf,0xdc,0xe3,0x54,0xab,0xfa,0x11,0x65,0xae,0x5b,0x27,0xf,0xd2,0xf1,0xae,0x92,0x76,0x2d,0x77,0x2e,0xe7,0x1e,0xdc,0xb7,0x8f,0xee,0x5d,0x32,0xda,0x7f,0xad,0xbb,0xdb,0x9c,0x66,0x88,0x60,0xfd,0x39,0xcd,0x37,0x2d,0xe3,0xf8,0xd3,0xd9,0x91,0x62,0xc7,0xd6,0x49,0x4b,0xc6,0xba,0x49,0xda,0xb8,0xc9,0x2f,0x8f,0x6b,0xc6,0x8f,0x8d,0xf1,0xc,0x25,0x11,0x77,0x38,0x41,0xa3,0xe3,0xdb,0x9c,0x68,0xb7,0x26,0x3f,0x6b,0xcd,0xad,0xd3,0x7e,0x48,0xf4,0x22,0xcb,0x5e,0x6d,0x6e,0xaa,0x9,0xed,0x3a,0xff,0x11,0x65,0xfd,0x37,0xce,0xe0,0x94,0xbd,0xe3,0xb4,0xdf,0x3b,0x82,0x14,0xfb,0x1e,0x8b,0xb4,0xcd,0x11,0x63,0xb1,0x7e,0xdc,0xe3,0x4c,0x7c,0x4a,0x11,0x65,0xa3,0xe3,0xd9,0x81,0x3b,0xea,0x43,0xb1,0x78,0xfa,0x87,0xd8,0xd3,0x31,0x6c,0x28,0x45,0x96,0x8f,0x8c,0xd1,0xc,0x1f,0xf6,0xb2,0xdf,0xae,0x93,0x1b,0x1f,0xad,0x46,0x88,0x66,0xe7,0x1a,0xa0,0xb5,0x34,0x7b,0x45,0x99,0x8f,0x5e,0x6d,0x6f,0xb4,0x30,0xa9,0xa0,0xc4,0x59,0x52,0xcb,0xec,0xd1,0xdb,0x9c,0x6a,0x82,0xd4,0xd1,0xec,0xc1,0x31,0xb0,0x6e,0x70,0x7f,0xd3,0xc7,0xa,0x45,0x99,0x91,0x75,0xe7,0xcf,0xb9,0xc7,0xb4,0xc7,0xc4,0xd1,0xdb,0x9c,0x1f,0xfd,0xa7,0x3,0xa8,0x7c,0x9a,0x79,0x74,0xbe,0x33,0x60,0x9e,0xc7,0x6d,0xce,0x33,0xc5,0x98,0x99,0x67,0xf6,0x8c,0x87,0x62,0xda,0x35,0xd2,0x63,0x63,0xf5,0xa9,0x7b,0xc7,0x66,0x1b,0x3d,0xb9,0xc1,0x34,0xce,0xaa,0x80,0xa6,0x9c,0xf1,0xd8,0xd3,0xda,0x2c,0xbc,0xe3,0xf9,0x39,0x7e,0x4a,0x5e,0x1b,0x32,0xdc,0x37,0x2e,0xe7,0x1e,0xd3,0x99,0x6f,0xc7,0x62,0xf5,0x78,0xfd,0xf,0x45,0xdb,0x9c,0x6e,0x5a,0xb4,0xe6,0x5b,0xf0,0xfd,0x27,0x32,0xdf,0xb5,0xc2,0x97,0x13,0x4d,0xf1,0x7e,0x78,0x4f,0x6b,0xa5,0xc7,0x63,0xc,0xd1,0x66,0x7b,0x74,0x56,0x16,0xd7,0x13,0x23,0x9d,0x54,0x3d,0x17,0x69,0xa2,0xae,0x83,0xb6,0xb2,0xdf,0x4e,0x78,0xb5,0x6c,0x45,0x96,0x9d,0x7f,0xec,0x9c,0xb5,0x54,0x76,0x2f,0x73,0x8b,0xa9,0xce,0x69,0xaf,0x8f,0x87,0x59,0x20,0xc6,0x9e,0xd3,0xc9,0xad,0xcb,0x3e,0xfc,0x72,0x7b,0x38,0x6d,0x54,0xe7,0x1a,0xb9,0x96,0x58,0x4e,0xdf,0x8e,0xf6,0x5,0x47,0xf3,0x44,0x54,0x99,0x65,0xd4,0xbd,0xc5,0xfe,0xdc,0xea,0x83,0x7e,0x39,0x3d,0x92,0x68,0xf8,0x66,0xb8,0x53,0xe7,0x33,0xe4,0xb2,0xd7,0x4f,0x66,0x99,0x51,0x9c,0x7c,0x50,0xf4,0x5d,0x8a,0x8f,0x93,0x7c,0xe6,0x7a,0x1e,0xe7,0x3b,0x56,0xd7,0x41,0x2b,0x8f,0x6e,0x78,0xed,0x7c,0x26,0x8f,0x6a,0xe7,0xda,0xe9,0x4c,0xf4,0x45,0xb8,0x2d,0x86,0x4e,0x56,0x8f,0x6b,0x89,0xaf,0x8f,0x84,0xa7,0x38,0x26,0x8f,0x8c,0x76,0xf6,0xe7,0x8e,0xd7,0xc7,0xc3,0xac,0x90,0x53,0x9e,0x2d,0x59,0x34,0xeb,0xff,0x62,0xc7,0x71,0xd8,0xbd,0xce,0x2e,0xf6,0xaf,0x13,0x56,0xa0,0x0,
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

