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
 int n = 0;
do
{
while (x < 62)
{
_putchar(x);
x++;
}
_putchar('\n');
}
 n++;
}
while (n < 10);
