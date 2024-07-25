#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node- adds new node at the beginning of list_t list
 * @head: head node
 * @str:str char *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *newNode = malloc(sizeof(list_t));/*creating space for new node*/

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
		newNode->str = strdup(str);
		newNode->next = NULL;
		/*get size of string for newNode len*/
		for (i = 0; str[i] != '\0'; i++)
		{
			newNode->len = i + 1;
		}
		newNode->next = *head; /*updates link part of the node*/
		*head = newNode;/*points to new node*/

	return (newNode);
}
