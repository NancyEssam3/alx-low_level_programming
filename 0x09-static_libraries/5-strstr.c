#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first occurrence of the substring needle in
 * the string haystack. The terminating null bytes (\0) are not compared
 * @haystack: input str
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *ret = NULL;

	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
		{
			ret = haystack;
			break;
		}
		str++;
		haystack = str;
	}

	return (ret);
}
