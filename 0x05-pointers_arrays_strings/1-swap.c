#include "main.h"
/**
 * swap_int - file function declaration
 * @a: parameter1
 * @b: parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int n;
int p;
n = *a;
p = *b;
*a = p;
*b = n;
}
