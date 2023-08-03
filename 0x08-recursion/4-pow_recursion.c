#include "main.h"

/**
 * _pow_recursion - return value of x raiesd to power of y
 * @x: base
 * @y: power
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	int answer = 0;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		answer = x * _pow_recursion(x, y - 1);
	}
	return (answer);
}
