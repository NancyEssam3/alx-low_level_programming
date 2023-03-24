#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: input arg
 * Return: 0
 */
void print_diagonal(int n)
{
	int i = 0;
	int k = 0;
	
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (k = 0; k < n-1; k++) 
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}	
	}
	else
	{
		_putchar('\n');
	}
}
