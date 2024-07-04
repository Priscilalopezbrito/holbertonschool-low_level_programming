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
	int i, j;

	/*If width or height is 0 or negative, return NULL*/
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
	for (i = 0; i < height; i++)
	{
		ptp[i] = (int *)malloc(width * sizeof(int));
		if (ptp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptp[j]);
			}
			free(ptp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptp[i][j] = 0;
		}
	}
	return (ptp);
}
