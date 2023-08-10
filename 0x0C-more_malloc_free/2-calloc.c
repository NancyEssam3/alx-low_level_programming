#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: num of elements
 * @size: bytes
 * Return: pointer to arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr = NULL;

	arr = malloc(nmemb * size);
	if (arr == NULL || nmemb == 0)
		return (NULL);
	return (arr);
}
