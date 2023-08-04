#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies 2 numbers
 * @argc: arg count
 * @argv: arguments
 * Return: 0, or  1 if error
 */
int main(int argc, char *argv[])
{
	int arg1 =  0;
	int arg2 = 0;

	if (argc > 1)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		printf("%d\n", arg1 * arg2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
