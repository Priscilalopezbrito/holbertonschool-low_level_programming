#include <ctype.h>
#include "main.h"
/**
 * _islower - looks for lowercase character
 * @c: char to check
 *
 * Description: Checks if letter is lowercase
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
