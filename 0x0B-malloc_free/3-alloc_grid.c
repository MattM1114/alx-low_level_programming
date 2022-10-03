#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * @width: rows of matrix
 * @height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int a, b, **net;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	net = malloc(sizeof(int *) * height);
	if (net == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < height ; a++)
	{
		net[a] = malloc(sizeof(int) * Width);
		if (net[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(net[a]);
			}
			free(net);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			net[a][b] = 0;
		}
	}
	return (net);
}

