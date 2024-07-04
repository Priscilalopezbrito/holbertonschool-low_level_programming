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
	arr = malloc(b * sizeof(*arr));
	/**
	 * if malloc fails, the malloc_checked
	 * function should cause normal process
	 * termination with a status value of 98
	 */
	if (arr == NULL)
	{
		exit(98);
	}
	/**
	 * Returns a pointer to the allocated memory
	 */
	return (arr);
}
