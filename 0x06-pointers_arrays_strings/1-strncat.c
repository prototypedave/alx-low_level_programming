#include "main.h"
#include <string.h>
/**
 *_strncat- function name
 *@dest: parameter 1
 *@src: parameter  2
 *@n: par 3
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest + strlen(dest);
while (*src != '\0' && n--)
{
*ptr++ = *src++;
}
*ptr = '\0';
return (dest);
}
