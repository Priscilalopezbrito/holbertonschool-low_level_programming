#include <ctype.h>
#include "main.h"
/**
 * _isupper - looks for uppercase char
 * @c: char to check
 *
 * Description: Checks if letter is uppercase
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
