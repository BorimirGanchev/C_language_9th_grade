#include <stdio.h>

int main(void) {
  int a = 7;
  printf("%p\n", &a);
  //%p printira dresa

  int * p = &a;
  printf("%p\n", p);
  //ukazatel kum a

  *p = 10;
  printf("%d\n", a);
  //davame celochislena stojnost na ukazatelq

  int b = 21;
  p = &b; //p now points to b;
  printf("%d\n", *p);

  int * k = &b;//
  int * l = k;

  b = 33;
  printf("%d\n", b);
  printf("%d\n", *k);
  printf("%d\n", *l);

  k = &a;
  a = 5;
  printf("%d\n", a);
  printf("%d\n", *k);
  printf("%d\n", *l);

  

  return 0;
}