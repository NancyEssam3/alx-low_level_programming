#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: input char
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase;
	int isupper = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
