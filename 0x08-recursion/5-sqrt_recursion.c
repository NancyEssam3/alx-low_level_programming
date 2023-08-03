#include "main.h"

/**
 * _sqrt_recursion - returns square root of number
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int ans = 0;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		int t = n / 2;

		if ( (t * t) > n)
		{
			ans =  _sqrt_recursion(t);
		}
		else if ( (t * t) < n)
		{
			ans = _sqrt_recursion( t + (n - t));
		}
	}
	return (ans);
}
