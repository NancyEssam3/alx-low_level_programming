#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: An input string
 * Return: Nothing
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
