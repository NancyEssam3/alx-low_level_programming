#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive nums
 * @argc: arg count
 * @argv: args
 * Return: 0 , 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc < 1)
	{

		printf("0\n");
	}
	else
	{
		int index = 0;
		int sum = 0;

		while (index < argc)
		{

			if (!(isdigit(argv[argc][index])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[index]);
			}
			index++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
