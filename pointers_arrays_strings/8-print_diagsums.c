#include "main.h"
/**
 *print_diagsums- function prints the chessboard.
 *@a: *a
 *@size: size
 */
void print_diagsums(int *a, int size)
{
	int i;
	int one, two;

	for (i = 0; i  < size; i++)
	{
		one = one + *((a + i * size) + i);
		two = two + *((a + i * size) + (size - 1 - i));
	}
}
