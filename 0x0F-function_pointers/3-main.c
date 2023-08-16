#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - test ops
 * @argc: argument count
 * @argv: arguments array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc == 0)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
