#include <stdio.h>
#include <stdlib.h>
#include "safeint.h"
#include <limits.h>

struct SafeResult safeadd(int x, int y)
{
    struct SafeResult result;
    if (x > 0 && y > 0 && x > INT_MAX - y)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (x < 0 && y < 0 && x < INT_MIN - y)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else
    {
        result.errorflag = 1;
        result.value = x + y;
    }
    return result;
}

struct SafeResult safesubtract(int v, int z)
{
    struct SafeResult result;
    if (v > 0 && z < 0 && v > INT_MAX + z)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (v < 0 && z > 0 && v < INT_MIN + z)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else
    {
        result.errorflag = 1;
        result.value = v - z;
    }
    return result;
}

struct SafeResult safemultiply (int a, int b)
{
    struct SafeResult result;
    if (a > 0 && b> 0 && a > INT_MAX / b)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (a < 0 && b < 0 && a < INT_MAX / b)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (a > 0 && b < 0 && a > INT_MIN / b)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (a < 0 && b > 0 && a < INT_MIN / b)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else
    {
        result.errorflag = 1;
        result.value = a * b;
    }
}

struct SafeResult safedivide (int c, int d)
{
    struct SafeResult result;
    if (d == 0)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else if (c == INT_MIN && d == -1)
    {
        result.errorflag = 0;
        result.value = 0;
    }
    else
    {
        result.errorflag = 1;
        result.value = c / d;
    }
    return result;   
}

struct SafeResult safestrtoint(char* str)
{
    struct SafeResult result;
    int i = 0;
    int sign = 1;
    int value = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
        {
            result.errorflag = 0;
            result.value = 0;
            return result;
        }
        if (value > INT_MAX / 10 || (value == INT_MAX / 10 && str[i] - '0' > INT_MAX % 10))
        {
            result.errorflag = 0;
            result.value = 0;
            return result;
        }
        value = value * 10 + (str[i] - '0');
        i++;
    }
    result.errorflag = 1;
    result.value = sign * value;
    return result;
}