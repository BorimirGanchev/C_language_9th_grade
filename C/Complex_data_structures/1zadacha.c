#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ull;

ull add(ull var, ull var2) {
    return var + var2;
}

ull reduce(ull arr[], ull size, ull (*func)(ull, ull), ull init) {
    ull result = init;
    for (ull i = 0; i < size; i++) {
        result = func(result, arr[i]);
    }
    return result;
}

int main() {
    ull arr[] = {1, 2, 3};
    ull size = sizeof(arr) / sizeof(arr[0]);
    ull result = reduce(arr, size, add, 0);
    printf("Result: %llu\n", result);
    return 0;
}
