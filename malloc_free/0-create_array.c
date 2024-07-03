#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *create_array-  creates an array of chars,
 *and initializes it with a specific char
 *@size: unsigned int
 *@c: char
 *Return: NULL if size = 0, a pointer to the array,
 *or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = (char *)malloc(size * sizeof(char));/*mallocate*/

	if (arr == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)/*iterrates array*/
	{
		arr[i] = c;
	}
	return (arr);
}
