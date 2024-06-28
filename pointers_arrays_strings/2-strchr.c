#include "main.h"
/**
 *_strchr- function that locates a character in a string.
 *@s: char ptr *s
 *@c: char c
 *Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');

}

