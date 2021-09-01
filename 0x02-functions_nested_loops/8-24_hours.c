#include "main.h"
#include <stdio.h>
void jack_bauer(void)
{
  int k = 0, j = 0, n = 0, x = 0;
  do {
    printf("%d%d:%d%d", k, j, n, x);
    x++;
    return x;
  } while (x < 10);
  if (x == 9){
    do {
      n++;
      printf("%d%d:%d%d", k, j, n, x)
	return n;
    } while (n < 6);

  }
}
