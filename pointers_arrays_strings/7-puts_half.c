#include "main.h"
/**
 * puts_half - Prints string in reverse
 * @str:char arg
 */
void puts_half(char *str)
{
	int len = 0;
	int a;
	int b;

	while (str[len] != '\0')
	{
		len++;
	}

	a = len / 2;

	for (b = a ; b < len ; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
