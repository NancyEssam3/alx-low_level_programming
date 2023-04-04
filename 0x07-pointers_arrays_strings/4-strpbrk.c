#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: input string
 * @accept: searched for string
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *l = accept;
	char *ret = NULL;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				ret = s;
				break;
			}
			accept++;
		}
		s++;
		accept = l;

		if (ret != NULL)
			break;
	}
	return (ret);
}
