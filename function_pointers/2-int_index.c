#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index-  function that prints a name
 *@array: an array
 *@size: number of elements in the array
 *@cmp: pointer to the function to be
 *used to compare values
 *Return: index of the first element for which
 *the cmp function does not return 0
 *If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			return (-1);
		}
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}

