#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 *_strdup-returns a pointer to a newly
 *allocated space in memory, which contains
 *a copy of the string given as a parameter.
 *@str: char *str
 *Return: Returns a pointer to the duplicated
 *string. It returns NULL if insufficient
 *memory was available.
 */
char *_strdup(char *str)
{
	size_t len = _strlen(str);
	char *des = (char *)malloc((len + 1) * sizeof(char));

	if (des == NULL)
	{
		return (NULL);
	}
	_strcpy(des, str);
	return (des);
	free(des);
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


