#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all- prints anything, followed by a new line
 *@format: string to be printed between numbers
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int ind;
	char c;
	int i;
	float f;
	char *s;

	va_start(list, format);
	while (format && format[ind])
	{
		if (
	}
}
