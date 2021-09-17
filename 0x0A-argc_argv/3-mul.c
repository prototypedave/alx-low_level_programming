#include <stdio.h>
#include <stdlib.h>
/**
 * main- returns multiplication of given numbers
 * @argc: counts arguments in command line
 * @argv: returns arguments in command line
 *
 * Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
puts("Error");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
c = a * b;
printf("%d\n", c);
return (0);
}
