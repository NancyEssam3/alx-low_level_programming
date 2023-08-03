#include "main.h"

/**
 * is_prime_number - checks if number is prime
 * @n: input number
 * Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	int ans = 0;

	if (n <= 1)
	{
		return (0);
	}
	else if ((1 / n - n) % n == 0)
	{
		return (0);
	}
	else if (n / n == 1)
	{
		ans = is_prime_number(n - 1 + 1 / n);
	}
	else
	{
		ans = is_prime_number(n - 1);
	}
	return (ans);
}
