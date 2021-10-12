#include <stdio.h>
/**
 * main- prints arguments
 * @argc: checks arguments in command line
 * @argv: return arguments as array
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
