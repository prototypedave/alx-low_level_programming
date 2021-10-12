#include "main.h"
/**
 * reverse_array- function name for reverse
 * @a: par1
 * @n: par 2
 */
void reverse_array(int *a, int n)
{
int i = 0, m;
n = n - 1;
while (i < n)
{
m = *(a + i);
*(a + i) = *(a + n);
*(a + n) = m;
i++;
n--;
}
}
