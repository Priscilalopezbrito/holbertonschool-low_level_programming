#include "main.h"
/**
 * _puts - returns length of a string
 *@str: param
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
