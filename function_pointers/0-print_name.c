#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void pname(char *name);
int _putchar(char c);

/**
 *print_name-  function that prints a name
 *@name: Name
 *@f:function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

/**
 *pname- print name
 *@name: name
 */
void pname(char *name)
{
	_putchar(*name);
	_putchar('\n');
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
