#include "main.h"
/**
 * times_table - 9 times 9
 *
 * Description: prints mult table
 *
 * Return: returns 0
 */
void times_table(void)
{
	int a, b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			int c = a * b;

			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (c < 10 && b != 0)
			{
				_putchar(' ');
			}

			if (c >= 10)
			{
				_putchar('0' + c / 10);
			}
			_putchar('0' + c % 10);
		}
		_putchar('\n');
	}
}
