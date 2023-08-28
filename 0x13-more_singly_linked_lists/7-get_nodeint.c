#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of
 * a listint_t linked list.
 * @head: input list
 * @index: node index
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i != index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		node = temp;
		return (node);
	}
}
