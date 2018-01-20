#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "coursework.h"

void generateKeys(unsigned char *initialKey, unsigned char keyList[5][8], unsigned char sbox[][16])
{
    unsigned char keys[5][8];
    unsigned char key[6][8];

    for (int i = 0; i < 8; i++)
    {
        key[0][i] = initialKey[i];
    }

    int i = 1;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 8; col++)
        {

            unsigned char srow = (key[row][col] >> 4) & 0xf;
            unsigned char scol = key[row][col] & 0xf;

            switch (col)
            {
            case 0:
                keys[row][col] = key[row][col] ^ key[row][col + 1];
                break;
            case 1:
                keys[row][col] = sbox[srow][scol]; /* s-box substitution of key[1]*/
                break;
            case 2:
                keys[row][col] = key[row][col] ^ key[row][col + 1];
                break;
            case 3:
                keys[row][col] = sbox[srow][scol]; /* s-box substitution of key[3]*/
                break;
            case 4:
                keys[row][col] = key[row][col] ^ key[row][col + 1];
                break;
            case 5:
                keys[row][col] = sbox[srow][scol]; /* s-box substitution of key[5]*/
                break;
            case 6:
                keys[row][col] = key[row][col] ^ key[row][col + 1];
            case 7:
                keys[row][col] = sbox[srow][scol]; /* s-box substitution of key[6]*/
            }
        }
        for (int col = 0; col < 8; col++)
        {
            key[i][col] = keys[row][col];
        }
        i++;
    }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 8; col++)
        {   
            keyList[row][col] = keys[row][col];
        }
    }
}
