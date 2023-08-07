#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2 dim array
 * @width: input
 * @height: input
 * Return: pointers to 2 dim arrayy
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h, i, w;
	/*Check if width or height is 0 or negative,*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Allocate memory for the 2D grid*/
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	/*Allocate memory for each row of the grid*/
	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			/*If it fails free previous memory and return*/
			for (i = 0; i < h; i++)
			{
				free(grid[i]);
		}
		free(grid[i]);
		return (NULL);
	}
}
/*Initialize each element of the grid to 0*/
for (h = 0; h < height; h++)
{
	for (w = 0; w < width; w++)
	{
		grid[h][w] = 0;
	}
}
return (grid);
}
