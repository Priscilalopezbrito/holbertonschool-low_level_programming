#include "main.h"
/**
 *_memset- fills memory with a constant byte.
 *@s: char ptr
 *@b: char ptr
 *@n: uns int
 *Return: pointer ro rhe memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0 ; c <= n ; c++)
	{
		s[c] = b;
	}
	return (s);
}
