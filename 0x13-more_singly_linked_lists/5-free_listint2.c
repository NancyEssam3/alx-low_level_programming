#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: input list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
