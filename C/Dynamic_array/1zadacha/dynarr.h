#ifndef DYNARR_H
#define DYNARR_H

typedef struct {
  double * buffer;
  unsigned int capacity;
  unsigned int size;
} DynamicArray;

DynamicArray init(unsigned int capacity);

double getel(DynamicArray * arr, int index);

void setel(DynamicArray * arr, int index, double value);

void pushback(DynamicArray * arr, double value);

double popback(DynamicArray * arr);

void push(DynamicArray * arr, int index, double value);

void pushfront(DynamicArray * arr, double value);

void pop(DynamicArray * arr, int index);

double popfront(DynamicArray * arr);

void releasedynarr(DynamicArray * arr);

int findIndex(DynamicArray * arr, double value);

#endif
