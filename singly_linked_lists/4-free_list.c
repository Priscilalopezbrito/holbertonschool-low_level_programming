#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* free_list-  that frees a list_t list
 * @head: *head
 *
 */

void free_list(list_t *head)
{
	list_t *pointer = head;/*points at first node of list */

	while ( pointer != NULL)/*loop to delete the list*/
	{
		pointer = pointer->next;
		free(head);
		head = pointer;
	}
}
