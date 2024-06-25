#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints string in reverse
 * @a: parameter a
 * @n: number of elements in array to be printed
 */
void print_array(int *a, int n)
{
	int arr;

	for (arr = 0 ; arr < n ; arr++)
	{
		if (arr > 0)
		{
			printf(", ");
		}
		printf("%d", a[arr]);
	}
	printf("\n");
}
