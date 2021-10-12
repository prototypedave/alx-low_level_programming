#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers- numbers base10
  *
 *Return: 0
 */
void print_most_numbers(void)
{
char x = 48;
while (x < 58)
{
if (x == 50 || x == 52)
{
x = x + 1;
}
_putchar(x);
x++;
}
_putchar('\n');
}
