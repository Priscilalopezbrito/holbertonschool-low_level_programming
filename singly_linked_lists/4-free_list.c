#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list- frees a list_t list
 * @head: head list
 **/

void free_list(list_t *head)
{
	list_t *currentNode = head;
	list_t *nextNode;

	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		free(currentNode->str);
		free(currentNode);
		currentNode = nextNode;
	}
}
