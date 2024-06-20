#include "main.h"
/**
 *more_numbers- prints  0 to 14 10x
 *description- printing void value
 */
void more_numbers(void)
{
	char i, x;

	for (x = '0'; x <= '9'; x++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
		}
}

