#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid- function name
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height <= 0)
return;
for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
