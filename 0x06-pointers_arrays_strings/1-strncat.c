#include "main.h"

/**
 * _strcat - a function that concatenates two strings n bytes only from src.
 * @dest: an input string
 * @src: an input string
 * @n: num of characters 
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
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
