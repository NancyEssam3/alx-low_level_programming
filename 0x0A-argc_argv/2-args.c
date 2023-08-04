#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all args
 * @argc: args num
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index++;
	}
	return (0);
}
