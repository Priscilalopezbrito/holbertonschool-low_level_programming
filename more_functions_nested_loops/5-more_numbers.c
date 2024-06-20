#include "main.h"
/**
 *more_numbers- prints  0 to 14 10x
 *description- printing void value
 */
void more_numbers(void)
{
	int n, l;

	for (l = 0 ; l <= 10 ; l++)
	{
		for (n = 0 ; n <= 14 ; n++)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar('1');
				_putchar((n - 10) + '0');
			}
		}
		_putchar ('\n');
	}
}
