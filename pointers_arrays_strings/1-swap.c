#include "main.h"
/**
 * swap_int - resets value to 98
 *@a: first value
 *@b:second value
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
