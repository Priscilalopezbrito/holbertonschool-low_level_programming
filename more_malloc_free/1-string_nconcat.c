#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);

/**
 *string_nconcat- concatenates two strings
 *@s1: char
 *@s2: char
 *@n: unsigned int
 *Return: Returns a pointer to the allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t _s1, _s2, num, len;
	char *str;

	_s1 = _strlen(s1);
	_s2 = _strlen(s2);

	if (n >= _s2)
	{
		num = _s2;
	}
	else
	{
		num = n;
	}
	len = _s1 + num;

	str = (char *)malloc(len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	_strcpy(str, s1);/*copy string s1*/
	_strncat(str, s2, num);/*concatenates strings*/
	str[len] = '\0';
	return (str);

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



/**
 **_strcpy - copies string pointed to by src
 *@dest: ptr
 *@src: ptr
 *Return: ptr
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}



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
