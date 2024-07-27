#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index- returns the nth node of dlistint_t linked list
 * @head: head
 * @index: index
 * Return: eturns the nth node, NULL if node does not exist
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *trav = head;
	unsigned int count;

	count = 0;
	/*traverse to find nth node*/
	while (trav != NULL && count < index)
	{
		trav = trav->next;
		count++;
	}
	/*if count equal index return content of index*/
	if (count == index)
	{
		return (trav);
	}
	else
	return (NULL);
}
