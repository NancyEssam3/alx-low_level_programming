#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lowcase;

	for (lowcase = 'z'; lowcase >= 'a'; lowcase--)
	{
		putchar(lowcase);
	}
	putchar('\n');
	return (0);
}
