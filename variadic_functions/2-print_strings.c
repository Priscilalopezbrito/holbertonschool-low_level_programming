#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings- prints strings, followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *str;

	va_start(list, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(list, const char *);
	/*If string is NULL, print (nil)*/
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
