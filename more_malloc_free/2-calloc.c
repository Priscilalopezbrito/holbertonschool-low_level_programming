#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);
/**
 *_calloc- allocates memory using malloc
 *@nmemb: unint
 *@size: unint
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	size_t t;

	t = nmemb * size;
	/**If nmemb or size is 0, then _calloc returns NULL*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(t);

	if (p == NULL)
	{
		return (NULL);
	}
	_memset(p, 0, t);
	return (p);
}





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

	for (c = 0 ; c < n ; c++)
	{
		s[c] = b;
	}
	c++;
	return (s);
}
