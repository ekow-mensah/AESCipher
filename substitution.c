#include <stdio.h>
#include "coursework.h"

unsigned char getLeftBits(unsigned char c){
	unsigned char bits = (c>>4) & 0xf;
	return bits;
}

unsigned char getRightBits(unsigned char c){
	unsigned char bits = c & 0xf;
	return bits;
}

void substitution(unsigned char * state, unsigned char box[][16]){

  for (int i = 0; i < sizeof(state); i++) {
      unsigned char temp = state[i];
      unsigned char left = getLeftBits(temp);
      unsigned char right = getRightBits(temp);
			state[i] = box[left][right];
    }
}
