#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *main- Entry point
 *
 *Return: Always 0
 */
int print_last_digit(int x)
{
x = x % 10;
x = abs(x);
return(x);
printf("%d", x);;
/* return x;*/
}
