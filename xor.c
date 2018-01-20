#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "coursework.h"

void XOR(unsigned char * state, unsigned char * key, int filelen){
  int i;
  int k = 0;

  unsigned char * out = (unsigned char *)malloc(sizeof(unsigned char) * filelen);

  for (i = 0; i < filelen; i++) {
    unsigned char temp = state[i] ^ key[k];
    state[i] = temp;
    k++;
    if(k == 64){
      k = 0;
    }
  }
  state[i] = '\0';
}
