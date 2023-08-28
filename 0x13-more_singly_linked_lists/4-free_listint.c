#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: input list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (temp)
	{
		temp = head;	
		head = head->next;
		free(temp);
	}
	free(head);
}
