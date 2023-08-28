#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint - a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head: input listt
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		temp = head;
		while (temp)
		{
			sum = sum + temp->n;
			temp = temp->next;
		}
		return (sum);
	}
}
