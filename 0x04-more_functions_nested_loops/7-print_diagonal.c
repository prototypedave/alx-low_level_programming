#include "main.h"
#include <stdio.h>
/**
 *print_diagonal- draws a linec
 *
 *@n: parameter
 *
 *Return: Always diagnol
 */
void print_diagonal(int n)
{
char diag = 92;
if (n > 0)
{
for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
if (j == i)
_putchar(diag);
else
_putchar(' ');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
