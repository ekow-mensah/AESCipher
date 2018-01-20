#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "coursework.h"

char *fileReader(char *path, int *len)
{

  FILE *fileptr;
  char *buffer;
  int filelen;

  fileptr = fopen(path, "rb"); // Open the file in binary mode

  if (fileptr == NULL)
  {
    return "";
  }

  fseek(fileptr, 0, SEEK_END); // Jump to the end of the file
  filelen = ftell(fileptr);    // Get the current byte offset in the file
  rewind(fileptr);             // Jump back to the beginning of the file

  buffer = (char *)malloc((filelen + 1) * sizeof(char)); // Enough memory for file + \0
  fread(buffer, filelen, 1, fileptr);                    // Read in the entire file
  fclose(fileptr);                                       // Close the file
  *len = filelen;
  return buffer;
}

char *writeToFile(char *filename, unsigned char *state, int filelen)
{
  FILE *filePtr;
  filePtr = fopen(filename, "wb");

  printf("%s", state);
  printf("\n");

  fwrite(state, 1, filelen, filePtr);

  fclose(filePtr);
}
