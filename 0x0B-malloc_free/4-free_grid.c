#include "main.h"
/**
 * free_grid -> print a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	free(grid[z]);
	free(grid);
}
