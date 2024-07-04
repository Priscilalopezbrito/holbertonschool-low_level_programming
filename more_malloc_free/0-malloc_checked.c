#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked- allocates memory using malloc
 *@b: int
 *Return: Returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	/**
	 * allocates memory using malloc
	 */
	arr = malloc(b);/**main already does sizeof*/
	/**
	 * if malloc fails, the malloc_checked
	 * function should cause normal process
	 * termination with a status value of 98
	 */
	if (arr == NULL)
	{
		exit(98);
	}
	return (arr);
}
