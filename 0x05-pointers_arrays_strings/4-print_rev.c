#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
