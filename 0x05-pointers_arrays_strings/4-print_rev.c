#include "main.h"
#include <string.h>
/**
 * print_rev -function name
 * @s: parameter for string
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int i;
for (i = strlen(*s); i >= 0; i--)
_putchar(*s);
}
