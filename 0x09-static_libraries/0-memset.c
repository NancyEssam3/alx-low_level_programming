#include "main.h"

/**
 * _memset - function that fills first n bytes of memory pointed by s
 * with b
 * @s: input memory area
 * @b: value added in memory
 * @n: num of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (p);
}
