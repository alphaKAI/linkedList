#include "spec.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

char* showElement(Pythagoras* element){
  char* buf = (char*)malloc(sizeof(char) * 20);
  sprintf(buf, "%s", varray(element));
  return buf;
}

char* varray(Pythagoras* p){
  char* buf = (char*)malloc(sizeof(char) * 20);
  sprintf(buf, "(%d, %d, %d)", p->a, p->b, p->c);
  return buf;
}

bool compareElement(Pythagoras fstArg, Pythagoras sndArg){
  if(fstArg.a == sndArg.a)
    if(fstArg.b == sndArg.b)
      if(fstArg.c == sndArg.c)
        return true;
  return false;
}
