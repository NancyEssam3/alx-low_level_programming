#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - function that concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: size of memory
 * Return: New String
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc(strlen(s1) + n);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
	{
		*(ptr + k) = *s1;
		k++;
		s1++;
	}
	if (n >= strlen(s2))
	{
		while (*s2)
		{
			*(ptr + k) = *s2;
			k++;
			s2++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(ptr + k) = *s2;
			s2++;
			k++;
			n--;
		}
	}
	return (ptr);
}
