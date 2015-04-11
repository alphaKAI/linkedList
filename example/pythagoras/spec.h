#ifndef SPEC_DEFINE
#define SPEC_DEFINE
typedef struct _Pythagoras{
  int a,
      b,
      c;
} Pythagoras;

#ifndef TYPE
#define TYPE Pythagoras
#endif

char* varray(TYPE*);
#endif
