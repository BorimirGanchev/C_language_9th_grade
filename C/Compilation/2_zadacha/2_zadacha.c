//https://www.delorie.com/djgpp/v2faq/faq8_20.html
#include <stdio.h>

int main (void)
{
    int a = 12, b = 18,i, number = 0;

    for (i = 1; i <= a && i <= b; ++i) {
        
        // check if i is a factor of both integers
        if (a % i == 0 && b % i == 0)
            number = i;
    }

    int nok = (a * b) / number;

    printf("%d",nok);
}