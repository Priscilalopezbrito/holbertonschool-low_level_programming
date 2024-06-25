#include "main.h"
/**
 *_strncat - cencatenates two strings
 *@dest: dest val
 *@src:src val
 *@n: n
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[len + i] = src[i];
	}
		dest[len + i] = '\0';

	return (dest);
}
