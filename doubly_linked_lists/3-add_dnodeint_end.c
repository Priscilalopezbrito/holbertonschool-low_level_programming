#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end- adds a new node at the end of list
 * @head: head
 * @n: n
 * Return: the address of the new element or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trav = *head;
	/*allocate memory space for new node*/
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	/*if it fails return NULL*/
	if (newNode == NULL)
	{
		return (NULL);
	}
	/*the ones we know */
	newNode->n = n;
	newNode->next = NULL;
	/*if list is empty*/
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);/**/
	}
	/*pointer to traverse the list to find end*/
	while (trav->next != NULL)
	{
		trav = trav->next;
	}

	trav->next = newNode;
	newNode->prev = trav;
	return (*head);
}
