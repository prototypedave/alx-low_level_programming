#include "main.h"
#include <string.h>
/**
 *_strcat- function to concanate 
 *@dest: parameter 1
 *@src: parameter 2
 *
 *Return dest
 */
char *_strcat(char *dest, char *src)
{
char* ptr = dest + strlen(dest);
while (*src != '\0') {
*ptr++ = *src++;
}
*ptr = '\0';
return dest;
}
