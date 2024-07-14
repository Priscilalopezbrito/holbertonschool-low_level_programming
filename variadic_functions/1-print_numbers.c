#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_numbers- prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	for (i = 0 ; i < n ; i++)
	{
		s = va_arg(list, char *);
		if (separator == NULL)
		{
			printf("%s\n",separator);
		}
		printf("%s\n",s);
	}
	va_end(list);
}
