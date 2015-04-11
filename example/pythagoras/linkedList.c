#include "linkedList.h"
#include "spec.h"

void addNode(list* parentList, TYPE newValue){
  listNode* newNode = (listNode*)malloc(sizeof(listNode));
  newNode->value = newValue;
  newNode->nextNode = NULL;

  if(parentList->lastNode != NULL){
    parentList->lastNode->nextNode = newNode;
    newNode->prevNode    = parentList->lastNode;
    parentList->lastNode = newNode;
  } else {
    parentList->firstNode = parentList->lastNode = newNode;
    newNode->prevNode = NULL;
  }
}

void freeList(list* parentList){
  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
    parentList->thisNode = parentList->thisNode->nextNode)
    free(parentList->thisNode);
}

unsigned long listLength(list* parentList){
  unsigned long arraySize = 0;
  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    arraySize++;
  return arraySize;
}

TYPE* toArray(list* parentList){
  TYPE* array;
  int count;
  unsigned long arraySize;
  
  arraySize = listLength(parentList);
  count     = 0;

  array = (TYPE*)malloc(sizeof(TYPE) * arraySize);
  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    array[count++] = parentList->thisNode->value;

  return array;
}

TYPE* toReArray(list* parentList){
  TYPE* array;
  int count;
  unsigned long arraySize;
  
  arraySize = listLength(parentList);
  count     = 0;

  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    arraySize++;

  array = (TYPE*)malloc(sizeof(TYPE) * arraySize);
  for(parentList->thisNode = parentList->lastNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->prevNode)
    array[count++] = parentList->thisNode->value;
  
  return array;
}

bool findNode(list* parentList, TYPE key){
  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    if(compareElement(parentList->thisNode->value, key))
      return true;
  return false;
}

listNode* pickupNode(list* parentList, TYPE key){
  listNode* returnNode = NULL;
   for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    if(compareElement(parentList->thisNode->value, key))
       returnNode = parentList->thisNode;
  return returnNode;
}

void printAll(list* parentList){
  for(parentList->thisNode = parentList->firstNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->nextNode)
    printf("%s\n", showElement(&parentList->thisNode->value));
}

void printReAll(list* parentList){
  for(parentList->thisNode = parentList->lastNode; parentList->thisNode != NULL;
      parentList->thisNode = parentList->thisNode->prevNode)
    printf("%s\n", showElement(&parentList->thisNode->value));
}
/* end of list struct implementation */
