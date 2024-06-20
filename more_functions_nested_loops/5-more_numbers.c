#include "main.h"
/**
 *more_numbers- prints  0 to 14 10x
 *description- printing void value
 */
void more_numbers(void)
{
	char str[] = "01234567891011121314";
	int n = 0;
	int nn = 0;

	for (nn = 0 ; nn < 10 ; nn++)
	{
		for (n = 0; n < 20; n++)
		{
			_putchar(str[n]);
		}
		_putchar ('\n');
	}
}

