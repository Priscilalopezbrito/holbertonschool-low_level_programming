#include "main.h"
/**
 *print_alphabet_x10- prints  the alphabeth in lowercase
 *description- printing void value
 */
void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (n < 10)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	_putchar(i);
	_putchar ('\n');
	n++;
	}
}
