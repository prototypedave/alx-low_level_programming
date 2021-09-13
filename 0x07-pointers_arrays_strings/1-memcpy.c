#include "main.h"
/**
 * _memcpy- main function name
 * @dest: parameter for destination to be copied to
 * @src: parameter of where it comes from
 * @n: parameter 3
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
