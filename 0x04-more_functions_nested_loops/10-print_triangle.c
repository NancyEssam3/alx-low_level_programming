#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: input size
 * Return: 0
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int space = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < space)
					_putchar(' ');
				else
					_putchar('#');
			}
			space--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}

}
