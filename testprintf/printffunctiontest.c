#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/*
 *_printf- Function produce output according to format
 *@format: Character string
 *Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;/*type for iterating arguments*/
	int i;
	
	va_start(args, format);

	
	for (i = 0; s[i] != NULL; i++)//fix
	{
		if (s[i] == '%')
		{
			format++;//evaluar i+1 ?????
		}
		if (*format =='%'')
		{
			putchar('%')
		}
		//else putchar
		i++;

	}
	va_arg(args, int);//for numbers
	va_arg(args, char *);//for string
	va_end(args);
	
	return (0);
}
