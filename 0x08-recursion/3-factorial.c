#include "main.h"

/**
 * factorial - function that returns factorial of a number
 * @n: input number
 * Return: factorial of number
 */
int factorial(int n)
{
	int fact = 0;
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		fact = fact + factorial(n -1);
	}
	return (fact);
}
