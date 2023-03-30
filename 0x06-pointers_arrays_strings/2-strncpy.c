#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest;
	int len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	if (n > len)
	{
		n = len;
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (str);
}
