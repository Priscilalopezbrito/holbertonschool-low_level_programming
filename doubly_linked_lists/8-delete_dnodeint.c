#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes node at index of dlistint_t list.
 * @head: double pointer to the head of the linked list.
 * @index: index of the node to delete.
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i;

    if (*head == NULL)
        return (-1);

    /* If the node to delete is the head */
    if (index == 0)
    {
        *head = temp->next;
        if (temp->next != NULL)
            temp->next->prev = NULL;
        free(temp);
        return (1);
    }

    /* Traverse the list to find the node to delete */
    for (i = 0; temp != NULL && i < index; i++)
        temp = temp->next;

    /* If the node doesn't exist */
    if (temp == NULL)
        return (-1);

    /* Unlink the node from the list */
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    if (temp->prev != NULL)
        temp->prev->next = temp->next;

    free(temp);
    return (1);
}
