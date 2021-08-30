/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *main- Entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x <'9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
