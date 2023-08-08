#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of array
 * @height: height of array
 * Return: array , NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i = 0, k = 0;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	while (i < height)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	i = 0;
	while (i < height)
	{
		while (k < width)
		{
			arr[i][k] = 0;
		}
	}
	return (arr);
}
