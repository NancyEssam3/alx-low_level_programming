#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: array size
 * @action: function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (k < size)
	{
		action(array[k]);
		k++;
	}
}
