#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Starting point
 * @grid: to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
int h;

if (grid == NULL || height == 0)
return;

for (h = 0; h < height; h++)
free(grid[h]);
free(grid);
}
