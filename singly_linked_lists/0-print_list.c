#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;
	const list_t *temp = h;

	count = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		count++;
	}
	return (count);
}
