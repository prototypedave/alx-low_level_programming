#include <stdio.h>
/**
*main- Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
char x;
for (x = '0'; x <= '9'; x++)
putchar(x);
for (x = 'A'; x <= 'F'; x++)
putchar(tolower(x));
putchar('\n');
return (0);
}
