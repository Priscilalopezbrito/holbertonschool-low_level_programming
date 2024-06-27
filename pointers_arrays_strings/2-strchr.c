#include "main.h"
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
	return (0);
}

