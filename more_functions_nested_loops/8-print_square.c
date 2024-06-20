#include "main.h"
/**
 *print_square- prints  # in sqrt
 *@size: int times # will be printed
 *description- prints # in square root form
 */
void print_square(int size)
{
	int i, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (s = 0 ; s < size ; s++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
}
