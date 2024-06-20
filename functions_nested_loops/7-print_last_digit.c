#include "main.h"
/**
 * print_last_digit - looks for lowercase character
 * @n: int to check
 *
 * Description: print las digit
 *
 * Return: returns 0
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
	}

	_putchar('0' + l);
	return (l);
}
