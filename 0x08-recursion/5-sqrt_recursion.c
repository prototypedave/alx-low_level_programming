#include "main.h"
/**
 * sqrt_check- substitute function name
 * @g: parameter 1
 * @c: parameter 2
 *
 * Return: -1 or sqrt of c
 */
int sqrt_check(int g, int c)
{
if (g * g == c)
return (g);
if (g * g > c)
return (-1);
return (sqrt_check(g + 1, c));
}
/**
 * _sqrt_recursion- function name
 * @n: parameter
 *
 * Return: n * n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
