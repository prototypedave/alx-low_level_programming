#include "main.h"
#include <string.h>
/**
 * _strlen - function for returning legthn
 *@s: parameter
 *Return:count
 */
int _strlen(char *s)
{
int count = 0;
while (*s != '\0')
{
count++;
s++;
}
return (count);
}
