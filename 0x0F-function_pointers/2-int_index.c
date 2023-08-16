#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array to search in
 * @size: num of elements in array
 * @cmp: pointer to function
 * Return: index of first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size <= 0)
		return (-1);
	if (cmp == NULL || array == NULL)
		return (-1);
	while (k < size)
	{
		if (cmp(array[k]) != 0)
		{
			return (k);
		}
		k++;
	}
	return (-1);
}
