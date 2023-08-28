#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * listint_len -  a function that returns the number of elements
 * in a linked listint_t list.
 * @h: input list
 * Return: Length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
