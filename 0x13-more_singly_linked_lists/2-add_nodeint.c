#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint -  a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: beginning of list
 * @n: new node
 * Return: New List
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = *head;
	*head = malloc(sizeof(listint_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = node;
	return (*head);
}
