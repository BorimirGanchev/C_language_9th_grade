#ifndef STRUC
#define STRUC

typedef struct {
    long result;
    char error[100];
} transformation;

transformation transformString(char* str, int Size);

#endif