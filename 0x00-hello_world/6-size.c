#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int integer;
	long int longinteger;
	long long int longlonginteger;
	char character;
	float floatnum;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longinteger));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longlonginteger));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatnum));
	return (0);
}
