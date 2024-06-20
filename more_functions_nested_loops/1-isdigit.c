#include <ctype.h>
#include "main.h"
/**
 *  _isdigit - looks for digit
 * @c: char to check
 *
 * Description: Checks if c is a digit
 *
 * Return: 1 if c is true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
