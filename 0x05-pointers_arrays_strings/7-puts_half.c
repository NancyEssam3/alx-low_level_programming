#include "main.h"

/**
 * puts_half - function that prints half of string
 * @str: input string
 * Return: nothin
 */
void puts_half(char *str)
{
	int len = 1;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
