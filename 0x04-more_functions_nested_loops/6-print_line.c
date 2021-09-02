#include "main.h"
#include <stdio.h>
/**
 *print_line- draws a linec
 *
 *@n: parameter
 *
 *Return: Always 0
 */
void print_line(int n)
{
if (n > 0)
{
do
{
_putchar('_');
n--;
}
while (n > 0);
_putchar('\n');
}
else
{
_putchar('\n');
}
}
