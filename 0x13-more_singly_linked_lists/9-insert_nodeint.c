#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position.
 * @head: input list
 * @idx: index
 * @n: new node
 * Return: new node address or null
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	temp = *head;
	while (i != (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
