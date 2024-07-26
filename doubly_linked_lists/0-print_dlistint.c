#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint- prints all elements of dlistint_t list
 * @h: h
 * Return: number of nodes
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count;

	count = 0;

	while (temp != NULL)
	{
		if (temp->n == '\0')
		{
			printf("\n");
		}
		else
		{
			printf("%d\n", temp->n);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
