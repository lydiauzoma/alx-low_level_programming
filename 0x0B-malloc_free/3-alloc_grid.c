#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid -> function return pointer to a 2 dimensional array
 *@width: width of the grid
 *@height: height of the grid
 *Return:NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int x, y, w, z;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(width * sizeof(int));
		if (a[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(a[y]);
			}
			free(a);
				return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (z = 0; z < width; z++)
			a[w][z] = 0;
	}
	return (a);
}
