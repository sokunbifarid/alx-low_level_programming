#include "main.h"

/**
* free_grid - function
* @grid: integer
* @height: integer
* Return:return value
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}

