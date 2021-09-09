#include "main.h"
#include <stddef.h>
/**
 *_strncpy - function name
 *@dest: par 1
 *@src: par 2
 *@n: par 3
 *
 *Return: ptr
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *(src + i))
{
*(dest + i) = *(src + i);
i++;;
}
while (i < n)
{
*(dest + i) = '\0';
i++;
}
return (dest);
}
