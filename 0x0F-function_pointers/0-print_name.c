#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - fun that prints a name
 * @name: name of person
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
