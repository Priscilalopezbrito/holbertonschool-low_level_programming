#include "main.h"
/**
 *print_triangle- prints trianngle #
 *@size: int times # will be printed
 *description- prints # triangle
 */
void print_triangle(int size)
{
	int t, s, p;

	for (t = 1 ; t <= size ; t++)
	{
		for (s = 0 ; s < size - t ; s++)
		{
			_putchar(32);
		}
		for (p = 0 ; p < t ; p++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

}
