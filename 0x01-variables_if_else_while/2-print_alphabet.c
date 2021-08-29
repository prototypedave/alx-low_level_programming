#include <stdio.h>
#include <ctype.h>
/**
*main- Entry point
*
*return: 0 Always (Success)
*/
int main(void)
{
char x;
for (x = 'A'; x <= 'Z'; x++)
putchar(tolower(x));
putchar('\n');
return (0);
}
