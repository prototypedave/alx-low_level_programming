#include "holberton.h"
#include <stdlib.h>
/**
 * create_array- function nam creates array of chars
 * @size: parameter for size of array to be created
 * @c: char to iniyialize array with
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
if (size == 0)
return (NULL);
a = malloc(sizeof(char) * size);
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
