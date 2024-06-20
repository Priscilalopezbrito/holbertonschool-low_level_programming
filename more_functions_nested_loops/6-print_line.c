#include "main.h"
/**
 *print_line- prints  _
 *@n: int number of times it will print line
 *description- printing line
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
