#include "main.h"

/**
 * _isdigit - function that checksif input char is a digit
 * @c: input char
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char digit;
	int isdigit = 0;

	for (digit = '0'; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
