#include <stdlib.h>
#include <time.h>
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
int n = 0;
do {
printf("%d", n);
n++;
} while (n < 10);
printf("\n");
return (0);
}
