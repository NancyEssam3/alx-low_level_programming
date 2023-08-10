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
	void *arr = NULL, *temp = NULL;
i
	if (nmemb == 0)
		return (NULL);
	arr = malloc((nmemb + 1) * size);
	if (arr == NULL)
		return (NULL);
	*temp = *arr;
	while  (*temp)
	{
		*temp = 0;
		temp++;
	}
	return (arr);
}