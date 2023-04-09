#include "main.h"

/**
 * _memcpy - function that copies n bytes from src to dest
 * @dest: input destination address
 * @src: input source address
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (p);
}
