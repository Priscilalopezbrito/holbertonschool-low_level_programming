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
	int i, num;
	int *pt;

	num = max - min + 1;/*size ck*/
	pt = (int *)malloc(num * sizeof(int));/*malloc*/
	/*If min > max, return NULL*/
	if (min > max)
	{
		return (NULL);
	}
	/*array*/
	for (i = 0; i < num; i++)
	{
		pt[i] = min + i;
	}
	/*If malloc fails, return NULL*/
	if (pt == NULL)
	{
		return (NULL);
	}
	return (pt);
}

