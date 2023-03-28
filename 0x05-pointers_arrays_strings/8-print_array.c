#include "main.h"
#include<stdio.h>

/**
 * print_array - function that prints n elem of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
}
