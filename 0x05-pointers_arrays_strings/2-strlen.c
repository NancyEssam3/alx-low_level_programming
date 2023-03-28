#include "main.h"

/**
 * _strlen - function that gets the length of a string
 * @s: input char array
 * Return: length of string
 */

int _strlen(char *s)
{
	int length  = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
