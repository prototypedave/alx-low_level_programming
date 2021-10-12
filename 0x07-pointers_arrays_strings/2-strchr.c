#include "main.h"
/**
 * _strchr- function name
 * @s: parameter 1
 * @c: parametet 2
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0; *(s + 1); i++)
{
if (*(s + i) == c)
return (s + i);
}
if (*(s + i) == c)
return (s + i);
return (0);
}
