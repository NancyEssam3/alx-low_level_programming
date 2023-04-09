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
	int nomatch = 2;
	char *l = accept;

	while (*s && nomatch != 0)
	{
		nomatch = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				c++;
				nomatch = 1;
				break;
			}
			accept++;
		}
		accept = l;
		s++;
	}

	return (c);
}
