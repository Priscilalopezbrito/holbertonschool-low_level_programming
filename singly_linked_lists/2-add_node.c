#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node- adds new node at the beginning of list_t list
 * @head:
 * @str:
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new = malloc(sizeof(list_t));/*creating space for new node*/
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str =  (char*)str;
		new->next = NULL;
		for (i = 0; str[i] != '\0'; i++)
		{
			new->len = i + 1;
		}
		new->next = *head;/*updates link part of the node*/
		*head = new;/*points to new node*/
	}
	return (new);
}
