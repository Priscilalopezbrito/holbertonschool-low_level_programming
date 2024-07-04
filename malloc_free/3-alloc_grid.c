#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid- returns a pointer to a 2 dimensional
 *array of integers
 *@width: int
 *@height: int
 *Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **ptp;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*malloc*/
	ptp = (int **)malloc(width * sizeof(int *));
	/*return NULL on failure*/
	if (ptp == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptp[i] = (int *)malloc(height * sizeof(int));
	}
	return (ptp);
}
