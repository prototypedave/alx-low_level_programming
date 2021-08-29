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
int n, lastD;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastD = n % 10;
if (lastD > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastD);
}
else if (lastD == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastD);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastD);
}
return (0);
}
