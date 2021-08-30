#include <stdio.h>
#include <ctype.h>
/**
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = 'A'; x <= 'Z'; x++)
if (x == 'E' | x == 'Q')
{
x = '';
}
putchar(tolower(x));
putchar('\n');
return (0);
}
