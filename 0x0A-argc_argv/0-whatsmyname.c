#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name followed by new line
 * @argc: input size
 * @argv: input arguments
 * Return: 0
 */
int main(int argc,char *argv[])
{
	if (argc != 0)
	{
		printf("%s",argv[0]);
		printf("\n");
	}
	return (0);
}
