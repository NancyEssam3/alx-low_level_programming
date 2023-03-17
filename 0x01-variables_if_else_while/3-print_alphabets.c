#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowcase;
	char upcase;

	for (lowcase = 'a'; lowcase <= 'z'; lowcase++)
	{
		putchar(lowcase);
	}
	for (upcase = 'A'; upcase <= 'Z'; upcase++)
	{
		putchar(upcase);
	}
	putchar('\n');
	return (0);
}
