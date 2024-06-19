#include "main.h"
/**
 * main - Program entry point
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
char str[] = "_putchar";
int n = 0;

		for (n = 0; n < 8; n++)
		{
			_putchar(str[n]);
		}
	_putchar ('\n');
	return (0);
}
