#include "main.h"

/**
 * _strspn - function that returns num of bytes that consist
 * of bytes from accept
 * @s: input string
 * @accept: inout bytes
 * Return: num og bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int c = 0;
	char *l = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				c++;
				break;
			}
			accept++;
		}
		accept = l;
		s++;
	}

	return (c);
}
