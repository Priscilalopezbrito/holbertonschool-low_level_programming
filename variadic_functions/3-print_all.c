#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_char- prints char
 *@args: list of types
 */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);


void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The list of arguments.
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_int(args);

	_putchar(n % 10 + '0');
}

/**
 * print_float - Prints a float.
 * @args: The list of arguments.
 */
void print_float(va_list args)
{
	double f = va_arg(args, double);
	int int_part = (int)f;

	print_int(args);
	_putchar('.');
	/* Print the fractional part */
	f -= int_part;
	f *= 1000000; /* Adjust precision if necessary */
	if (f < 0)
		f = -f;
	print_int(args);
}

/**
 * print_string - Prints a string.
 * @args: The list of arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
}
/**
 *print_all- prints anything, followed by a new line
 *@format: string to be printed between numbers
 **/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *separator = "";

	format_spec_t formats[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].specifier)
		{
			if (format[i] == formats[j].specifier)
			{
				_putchar(*separator);
				separator = ", ";
				formats[j].print_func(args);
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	_putchar('\n');
}

