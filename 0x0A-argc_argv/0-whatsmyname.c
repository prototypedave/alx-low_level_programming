#include <stdio.h>
/**
 * main- prints my name
 * @argc: number of arguments passed in commandline
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}

