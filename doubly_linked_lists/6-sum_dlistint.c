#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint- returns sum of all data (n) of dlistint_t linked list
 * @head: head
 * Return: Sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *trav = head;
	int sum;

	sum = 0;
	while (trav != NULL)
	{
		sum = sum + trav->n;
		trav = trav->next;
	}
	return (sum);
	if (head == NULL)
	{
		return (0);
	}
}

