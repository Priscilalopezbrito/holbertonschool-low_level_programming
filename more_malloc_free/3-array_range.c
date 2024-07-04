#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *array_range- function that creates an array of integers.
 *@min: int
 *@max: int
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *pt;

	/*If min > max, return NULL*/
	if (min > max)
	{
		return (NULL);
	}
	/*malloc*/
	pt = (int *) malloc(min * sizeof(int));
	for (i = 0; i < min; i++)
	{
		pt[i] = max;
	}
	/*If malloc fails, return NULL*/
	if (pt == NULL)
	{
		return (NULL);
	}
	return (pt);
}

