#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: input string one
 * @s2: input string two
 * Return: array or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *arr = NULL, *temp1 = s1, *temp2 = s2;
	int size = 1;

	if ((s1 == NULL) & (s2 == NULL))
		return (NULL);
	while (*temp1)
	{
		temp1++;
		size++;
	}
	while (*temp2)
	{
		temp2++;
		size++;
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	temp1 = arr;
	while (*s1)
	{
		*arr = *s1;
		s1++;
		arr++;
	}
	while (*s2)
	{
		*arr = *s2;
		s2++;
		arr++;
	}
	return (temp1);
}
