#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all- prints anything, followed by a new line
 *@format: string to be printed between numbers
 */
/*
 */
struct print_t
{
char form;
void (*p)(va_list *);
};

void printchar(va_list *list);

void printchar(va_list *list)
{
	char c;
	c = va_arg(*list, int);
	printf("%c, ", c);
}

void print_all(const char * const format, ...)
{
	va_list list;

	struct print_t pnt[] = {{'c', printchar}};
	const char *p;
	size_t i;

	va_start(list, format);
	p = format;

    while (*p)
	{
		for (i = 0; i < sizeof(pnt) / sizeof(pnt[0]); i++)
		{
			if (*p == pnt[i].form)
			{
				pnt[i].p(&list);
				break;
			}
		}
		p++;
	}
	va_end(list);
	printf("\n");
}
