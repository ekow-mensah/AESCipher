#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "coursework.h"



/*
void shiftBits() {
  int temp1;
  int first;

  for (size_t block = 0; block < blockLen; block++) {
    for (size_t i = 0; i < 8; i++) {
      for (size_t j = 0; j < i; j++) {
        for (size_t k = 0; k < 8; k++) {
          if(k == 7){
            list.arr[block].arr[k][i] = first;
          }else{
            temp1 = list.arr[block].arr[k][i];
            first = temp1;
            list.arr[block].arr[k][i] = list.arr[block].arr[k+1][i];
            list.arr[block].arr[k+1][i] = temp1;
          }
        }
      }
    }
  }
}


void createStream(unsigned char * state){
    int s = 64 * blockLen;
    int index = 0;

    unsigned char data[8];
    unsigned char workingBit[2];

    for (int i = 0; i < blockLen; i++) {
        for (int j = 0; j < 8; j++) {
          memset(data, 0, sizeof data);
            for (int k = 0; k < 8; k++) {
              sprintf(workingBit, "%d", list.arr[i].arr[j][k]);
              strcat(data, workingBit);
            }

        unsigned char z = strtol(data, 0, 2);
        printf(" %d ", z);
      state[index] = z;
      index++;
        }
    }
}

void permutation(unsigned char * state, int filelen){

  //initialise(state, filelen);
  //createBlocks(state);
  shiftBits(state);
  //printBlocks();
  createStream(state);
}

void inverseShiftBits(){
  int temp1;
  int first;

for (size_t block = 0; block < blockLen; block++) {
  for (size_t r = 0; r < 7; r++) {
    for (size_t i = 0; i < 8; i++) {
      for (size_t j = 0; j < i; j++) {
        for (size_t k = 0; k < 8; k++) {
          if(k == 7){
            list.arr[block].arr[k][i] = first;
          }else{
            temp1 = list.arr[block].arr[k][i];
            first = temp1;
            list.arr[block].arr[k][i] = list.arr[block].arr[k+1][i];
            list.arr[block].arr[k+1][i] = temp1;
          }
        }
      }
    }
  }
}

}


void inversePermutation(unsigned char * state, int filelen){

  initialise(state, filelen);
  createBlocks(state);
  //printBlocks();
  inverseShiftBits(state);
  //removePadding(state);
  //printBlocks();
  createStream(state);
}
*/