#include <stdio.h>
/**
 * main- prints number of argumeents
 * @aŕgc: checks for arguments
 * @argv: array of args
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
