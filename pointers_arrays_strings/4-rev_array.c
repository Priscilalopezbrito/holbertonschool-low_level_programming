#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: int
 *@n:int
 *Return: tbd
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2 ; i++)
	{
		int t = a[i];

		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}

