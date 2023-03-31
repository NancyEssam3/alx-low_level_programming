#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */

char *leet(char *s)
{
	char chars[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0;
	char *str = s;

	while (*s)
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == chars[i])
			{
				*s = sub[10];
			}
		}
		s++;
	}

	return (str);
}
