#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len-  function returns the number of elements in a linked list_t list
 * @h: head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int count;
	const list_t *temp = h;

	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
