#include "main.h"
/**
 *_strcmp- function name
 * @s1: par1
 *@s2: par2
 *
 *Return: unsigned char
 */
int _strcmp(char *s1, char *s2)
{
while (*s1)
{
if (*s1 != *s2)
{
break;
}
s1++;
s2++;
}
return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
