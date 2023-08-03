#include "main.h"

/**
 * _print_rev_recursion - function that prints string in reverse
 * @s: inout string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		char *temp = s + 1;

		_print_rev_recursion(temp);
		_putchar(*s);
	}
}
