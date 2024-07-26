#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_t- adds new node at the beginning of dlistint_t list
 * @head:
 * @n:
 * Return: the adress of a new element of NULL if it failed
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t * newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	/*condition in nothing passed to n*/
	newNode->prev = NULL ;/*???*/
	newNode->n = n;
	newNode->next = *head;

	/*if *head null??
	 * */
	/*verify head???*/
	/*si head no es null 
	 * */
	if (*head != NULL)
	{
		(*head)->prev = newNode;
	}

	/*(*head)->prev = newNode;*//*checking...*/
	*head = newNode;
	return (*head);

}
