#include <stdio.h>

int binary();

int main()
{
    int res;
    res=binary();
    printf("%d",res);

    return 0;
}

int binary()
{
  int c, first=0, last=5, middle, n, search=10;
  int array[6]={1, 2, 5, 7, 8, 10};

  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      return middle;
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    return -1;

}