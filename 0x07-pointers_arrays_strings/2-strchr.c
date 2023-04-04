#include "main.h"

/**
 * _strchr - function that returns pointer to first occurence of a char
 * @s: string s
 * @c: char to find
 * Return: pointer to char
 */

char *_strchr(char *s, char c)
{
	char *p = NULL;

	while (*s)
	{
		if (*s == c)
		{
			p = s;
			break;
		}
		s++;
	}

	return (p);
}
