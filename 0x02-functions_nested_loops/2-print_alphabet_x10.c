#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void)
{
  int x, j = 1;
  do{
    for (x = 'a'; x <= 'z'; x++){
      _putchar(x);
    }
    _putchar('\n');
    j++;
  }while (j <= 10);
}
