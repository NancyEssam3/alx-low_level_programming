#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: input string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return len;
}
