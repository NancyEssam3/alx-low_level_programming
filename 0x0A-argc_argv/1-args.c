#include "main.h"
#include <stdio.h>

/**
 * main - program that prints num of args passed
 * @argc: args number
 * @argv: input args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d", argc);
		printf("\n");
	}
	return (0);
}
