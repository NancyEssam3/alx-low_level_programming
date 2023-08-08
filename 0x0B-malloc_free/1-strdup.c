#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 *  memory, which contains a copy of the string given as a parameter.
 *  @str: given string
 *  Return: pointer to string, NULL if failed
 */
char *_strdup(char *str)
{
	char *arr = NULL;
	char *temp = str;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*temp)
		{
			temp++;
			size++;
		}
		arr = malloc(size * sizeof(char));
		temp = arr;
		if (arr == NULL)
		{
			return (NULL);
		}
		while (*str)
		{
			*arr = *str;
			arr++;
			str++;
		}
	}
	return (temp);
}
