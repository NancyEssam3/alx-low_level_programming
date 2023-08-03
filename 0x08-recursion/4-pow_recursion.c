#include "main.h"

/**
 * _pow_recursion - return value of x raiesd to power of y
 * @x: base
 * @y: power
 * Return: power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (0);
	}
	else
	{
		int answer = x * _pow_recursion(x, y - 1);
		
		return (answer);
	}
}
