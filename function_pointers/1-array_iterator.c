#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator-  function that prints a name
 *@array: an array
 *@size: size of the array
 *@action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
