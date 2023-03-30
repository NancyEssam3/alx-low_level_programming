#include "main.h"

/**
 * _strncat - a function that concatenates two strings n bytes only from src.
 * @dest: an input string
 * @src: an input string
 * @n: num of characters
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (str);
}
