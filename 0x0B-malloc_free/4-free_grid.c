#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array
 *@grid: a pointer to the array
 *@height: the number of arrays in the grid
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
