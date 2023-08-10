#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr = NULL;
	int size = (max - min) + 1;
	unsigned int k = 0;

	if (min > max)
		return (NULL);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
	{
		*(arr + k) = min;
		min++;
		k++;
	}
	return (arr);
}
