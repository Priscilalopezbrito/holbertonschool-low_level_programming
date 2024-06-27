#include "main.h"
/**
 *_strspn- function that the length of a prefix substring.
 *@s: char ptr *s
 *@accept: char
 *Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		l = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l = 1;
				break;
			}
		}
			if (!l)
			{
				return (i);
			}
	}
	return (i);
}


