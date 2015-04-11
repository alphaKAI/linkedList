#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

const int max = 1000;

void solver(list* pList){
  int a, b, c;
  for(a = 1; a <= max; a++)
    for(b = 1; b <= a; b++)
      for(c = 1; c <= b; c++)
        if(a*a == b*b + c*c){
          Pythagoras tmp = {a, b, c};
          addNode(pList, tmp);
        }
}

int main(){
  list pList = {};

  solver(&pList);
  Pythagoras* array = toArray(&pList);
  printAll(&pList);

  freeList(&pList);
  return 0;
}
