#include "main.h"
/**
 * _puts_recursion - Prints a string
 * @s:pointer *s
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
	_putchar('\n');
}

