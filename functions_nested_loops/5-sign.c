#include "main.h"
/**
 * print_sign - looks for lowercase character
 * @n: int to check
 *
 * Description: prints the sign of a number
 *
 * Return: 1 if more than 0 0 if 0 and - if less than 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return(-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('+');
		return(1);
	}
}
