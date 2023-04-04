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
	char *str = needle;
	char *ret = NULL;

	while (*haystack != '\0')
	{
		while (*needle != '\0')
		{
			if (*haystack == *needle)
			{
				ret = haystack;
				break;
			}
			needle++;
		}
		if (ret != NULL)
			break;
		haystack++;
		needle = str;
	}

	return (ret);
}
