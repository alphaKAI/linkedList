#ifndef LINKED_LIST_HEADER
#define LINKED_LIST_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "spec.h"

/* List Structure */
typedef struct _listNode {
  struct _listNode* prevNode;
  struct _listNode* nextNode;
  TYPE value;
} listNode;

typedef struct _list{
  listNode* firstNode;
  listNode* lastNode;
  listNode* thisNode;
} list;

void initList(list* parentList);
void freeList(list* parentList);
void addNode(list* parentList, TYPE newValue);

TYPE* toArray(list* parentList);
TYPE* toReArray(list* parentList);
unsigned long listLength(list* parentList);
bool findNode(list* parentList, TYPE key);
listNode* pickupNode(list* parentList, TYPE key);
void printAll(list* parentList);
void printReAll(list* parentList);

/* Interface */
char* showElement(TYPE*);
bool compareElement(TYPE, TYPE);

#endif
