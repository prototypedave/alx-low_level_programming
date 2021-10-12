#include "main.h"
#include <stdio.h>
/**
 *print_square- draws a linec
 *
 *@n: parameter
 *
 *Return: Always 0
 */
void print_square(int n)
{
  int i = 0, j;
     while (i <= n)
      {
	for (j = 0; j <= i; j++)
	  {
	  j = '#';
	_putchar(j);
	  }
	i++;
      }
}
