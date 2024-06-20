#include "main.h"
/**
 *print_diagonal- prints  \
 *@n: int times char \ will be printed
 *@n:int n gets value
 *description- prints diagonal \
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		_putchar(92);
	}
	_putchar('\n');
}
