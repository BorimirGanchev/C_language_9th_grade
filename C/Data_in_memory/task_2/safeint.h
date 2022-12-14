#ifndef SAFEINT_H
#define SAFEINT_H

struct SafeResult
{
    int value;
    char errorflag;
};

struct SafeResult safeadd(int x, int y);
struct SafeResult safesubtract(int v, int z);
struct SafeResult safemultiply (int a, int b);
struct SafeResult safedivide (int c, int d);
struct SafeResult safestrtoint(char* str);

#endif