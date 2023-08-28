#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: input list
 * @index: node inde
 * Return: 1 ,if fail -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);
	temp = *head;
	if (*head == NULL)
	{
		free(*head);
		return (1);
	}
	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (i < index)
	{
		temp = temp->next;
		i++;
		if (temp == NULL)
			return (-1);
	}
	node = temp;
	node = node->next;
	temp->next = node->next;
	free(node);
	return (1);
}
