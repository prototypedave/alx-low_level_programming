#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts- prints a string
 * str: parameter
 *
 * Return: 0
 */
void _puts(char *str)
{
int i = 0;
int len = strlen(str);
while (str[i] < len)
{
if (str[i] == '\0')
{
putchar('\n');
}
putchar(str[i]);
i++;
}
}
