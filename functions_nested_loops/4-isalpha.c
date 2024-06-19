#include <ctype.h>
#include "main.h"
/**
 * _isalpha - looks for lowercase character
 * @c: char to check
 *
 * Description: Checks if it is alphabetic
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
