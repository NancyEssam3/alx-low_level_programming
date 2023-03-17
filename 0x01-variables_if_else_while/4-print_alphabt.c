#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
		if (lowcase != 'q' && lowcase != 'e')
		{
			putchar(lowcase);
		}
	}
	putchar('\n');
	return (0);
}
