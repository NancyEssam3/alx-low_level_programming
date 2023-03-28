#include "main.h"

/**
 * swap_int - function that swaps 2 integers
 * @a: first input
 * @b: second input
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int *tmp = &a;

	a = &b;
	b = &tmp;
}
