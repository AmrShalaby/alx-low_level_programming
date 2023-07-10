#include "main.h"
/**
 * free_grid - frees a 2D array of integers previously
 * created by alloc_grid
 * @grid: pointer to the 2D array to free
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
