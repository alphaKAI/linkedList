#include "spec.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

char* showElement(int* element){
  char* buf = (char*)malloc(sizeof(char) * 1);
  sprintf(buf, "%d%c", *element, '\0');
  return buf;
}

bool compareElement(int fstArg, int sndArg){
  if(fstArg == sndArg)
    return true;
  return false;
}
