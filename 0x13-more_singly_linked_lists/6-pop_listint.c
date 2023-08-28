#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint -  a function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: input list
 * Return: data n if empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
