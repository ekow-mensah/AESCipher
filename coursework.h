#ifndef COURSEWORK
#define COURSEWORK

void generateKeys(unsigned char *initialKey, unsigned char keyList[5][8], unsigned char sbox[][16]);

void substitution(unsigned char *state, unsigned char box[][16]);
unsigned char getRightBits(unsigned char c);
unsigned char getLeftBits(unsigned char c);

char *fileReader(char *path, int *len);
char *writeToFile(char *filename, unsigned char *state, int filelen);

void XOR(unsigned char *state, unsigned char *key, int filelen);

void permutation(unsigned char *state, int filelen);
void inversePermutation(unsigned char *state, int filelen);

#endif
