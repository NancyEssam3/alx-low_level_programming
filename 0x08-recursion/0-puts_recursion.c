#include "main.h"

/**
 * _puts_recursion - function that prints a string followed by new line
 * @s: input string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(*s);
	}
	else{
		_putchar("\n");
	}
	return;
}

