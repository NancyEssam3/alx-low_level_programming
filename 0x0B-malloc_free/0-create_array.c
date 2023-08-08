#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of array
 * @c: array name
 * Return: Pointer or null if failed
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));
		arr = c;
	}
	return (arr);
}
