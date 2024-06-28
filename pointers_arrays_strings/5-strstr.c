#include "main.h"

int _memcmp(const void *str1, const void *str2, int n);
/**
 *_strstr- function that searches a string for any of a set of bytes.
 *@haystack: char ptr
 *@needle: char
 *Return: null
 */
char *_strstr(char *haystack, char *needle)
{
	int n = _strlen(needle);

	while (*haystack)
	{
		if (!_memcmp(haystack++, needle, n))
		{
			return (haystack - 1);
		}
	}
	return (0);
}

/**
 *_memcmp- function
 *@str1: ptr
 *@str2: ptr
 *@n: uns int
 *Return: 0
 */
int _memcmp(const void *str1, const void *str2, int n)
{
	const unsigned char *p1 = str1, *p2 = str2;

	while (n--)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		else
			p1++, p2++;
	}
	return (0);
}


/**
 * _strlen - returns length of a string
 *@s: param
 *Return:  0 on success. Error code otherwise
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
