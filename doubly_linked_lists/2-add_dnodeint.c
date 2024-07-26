i#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint- adds new node at the beginning of dlistint_t list
 * @head: head
 * @n:num
 * Return: the adress of a new element of NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->prev = NULL ;/*???*/
	newNode->n = n;
	newNode->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (*head);

}
