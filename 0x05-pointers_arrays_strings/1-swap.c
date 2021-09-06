#include "main.h"
/*
 * swap_int - main function
 * @a: parameter1
 * @b: parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int n, p;
n = *a;
p = *b;
*a = p;
*b = n;;
}
