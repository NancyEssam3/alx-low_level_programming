#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: an input string
 * @s2: an input string
 * Return: The difference s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int ret = 0;

	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}

	ret = s1 - s2;

	return (ret);
}
