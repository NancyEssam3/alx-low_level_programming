#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint_end -  a function that adds a new node at the end
 * of a listint_t list.
 * @head: list start
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	(node)->n = n;
	(node)->next = NULL;
	while (*head)
	{
		if ((*head)->next == NULL)
		{
			(*head)->next = node;
			break;
		}
		(*head) = (*head)->next;
	}
	return (node);
}
