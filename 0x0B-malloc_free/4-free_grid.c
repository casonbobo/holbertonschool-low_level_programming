#include "main.h"
/**
 *free_grid - free the grid bro
 *@grid: just a box really
 *@height: just a length really
 *Return: 0
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
