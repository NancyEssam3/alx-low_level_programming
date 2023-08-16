#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function that adds 2 integers
 * @a: input num
 * @b: input num2
 * Return: sum result
 */
int op_add(int a, int b)
{
	int sum = 0;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - function that subtracts 2 nums
 * @a: num
 * @b: num2
 * Return: subtraction res
 */
int op_sub(int a, int b)
{
	int sub = 0;

	sub = a - b;
	return (sub);
}

/**
 * op_mul - function that multiplies
 * @a: num
 * @b: num2
 * Return: multiplication res
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides
 * @a: num
 * @b: num2
 * Return: division result
 */
int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}

}

/**
 * op_mod - function that computes remainder
 * @a: num
 * @b: num2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
