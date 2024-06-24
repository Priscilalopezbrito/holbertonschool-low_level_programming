#include "main.h"
/**
 * puts2 - Prints string in reverse
 * @str:char
 */
void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0 ; i < len ; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
