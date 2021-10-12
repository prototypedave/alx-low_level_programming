#include <stdlib.h>
#include "main.h"
/**
 *main- Entry point
 *
 *Return: Always 0
 */
int _abs(int n)
{
if (n < 0)
{
n = abs(n);
return n;
}
else
{
return n;
}
}
