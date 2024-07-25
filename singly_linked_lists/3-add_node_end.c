#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int _strlen(const char *s);

/**
 * add_node_end- adds node at the end of linked list
 * @head: heat of list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));/*creating space for new node*/

	if (newNode == NULL)/*if fail, return null and free memory*/
	{
		/*free(newNode);*/
		return (NULL);
	}
	/*new node data*/
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	/*Empty linked list*/
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
	/*
	* pointer to traverse linked list
	* until finding the last node
	* starting in head
	*/
		list_t *pointer = *head;

		while (pointer->next != NULL)
		{
			pointer = pointer->next;
		}
		pointer->next = newNode;
	}
	return (newNode);/*address of the new node*/
}






/**
 * _strlen - returns length of a string
 * @s: param
 * Return:  0 on success. Error code otherwise
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

