#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: input char
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	char lowercase;
	int islower = 0;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		if (c == lowercase)
		{
			islower = 1;
			break;
		}
	}

	return (islower);
}
