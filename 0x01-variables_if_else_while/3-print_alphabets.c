#include <stdio.h>
#include <ctype.h>
/**
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char x, j;
for (x = 'A'; x <= 'Z'; x++)
{
putchar(tolower(x));
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
