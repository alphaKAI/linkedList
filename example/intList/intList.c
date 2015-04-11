#include <stdio.h>
#include "linkedList.h"

int main(){
  int* array;
  int* array2;
  int i;
  list intList = {};
  //add node
  for(i = 0; i < 5; i++)
    addNode(&intList, i);

  printf("printAll------\n");
  printAll(&intList);
  printf("printReAll------\n");
  printReAll(&intList);

  printf("toArray test------\n");
  array = toArray(&intList);
  for(i = 0; i < listLength(&intList); i++)
    printf("%d\n", array[i]);
  
  printf("toReArray test------\n");
  array2 = toReArray(&intList);
  for(i = 0; i < listLength(&intList); i++)
    printf("%d\n", array2[i]);

  printf("findNode test------\n");
  if(findNode(&intList, 2))
    printf("true\n");
  else
    printf("false\n");
  
  printf("pickupNode test------\n");
  printf("%d\n", pickupNode(&intList, 2)->value);

  freeList(&intList);
  return 0;
}
