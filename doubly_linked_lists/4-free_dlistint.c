#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint- frees a dlistint_t list
 * @head: head
 *
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
