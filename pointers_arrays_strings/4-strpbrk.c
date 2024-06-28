#include "main.h"
/**
 *_strpbrk- function that searches a string for any of a set of bytes.
 *@s: char ptr *s
 *@accept: char
 *Return: s  matches b in accept
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
		{
			return (s);
		}
	}
	return (0);
}

/**
 *_strchr- function that locates a character in a string.
 *@s: char ptr *s
 *@c: char c
 *Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0' ; s++)
	{
		while (*s == c)
		{
			return (s);
		}
	}
	return (s);
	return (0);
}
