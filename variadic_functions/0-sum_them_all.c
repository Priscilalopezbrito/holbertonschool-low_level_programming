#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *sum_them_all- returns the sum of all its parameters
 *@n: first arg
 *Return: 0 on success
 */
int sum_them_all(const unsigned int n, ...)
{
	/*
	 * object and a reference to the
	 *function's last parameter
	 */
	va_list list;
	unsigned int i;
	int summ;

	if (n == 0)
	{
		return (0);
	}
	/**/
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		summ = summ + va_arg(list, int);
	}
	va_end(list);
	return (summ);
}
