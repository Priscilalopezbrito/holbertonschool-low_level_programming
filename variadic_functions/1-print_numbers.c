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
	unsigned int i, j;

/*access variadic function arguments*/
	va_start(list, n);

	for (i = 0; i < (unsigned int)*separator ; i++)
	{
		j = va_arg(list, unsigned int);
		printf("%u", j);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if (separator == NULL)
		{
			printf(" ");
		}
		
	}
	va_end(list);
	printf("\n");
}
