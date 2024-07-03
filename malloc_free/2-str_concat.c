#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

/**
 *str_concat- concatenates two strings
 *@s1: char *
 *@s2: char *
 *Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_, s2_, s3_;
	char  *pt;

	/*if NULL is passed, treat it as an empty string*/
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_ = _strlen(s1);/*length of a string*/
	s2_ = _strlen(s2);/*length of a string*/
	s3_ = s1_ + s2_;
	/*Newly allocated space s1,s2*/
	pt = (char *)malloc(s3_ + 1);
	/*Return NULL on failure*/
	if (pt == NULL)
	{
		return (NULL);
	}
	_strcpy(pt, s1);/*copy string s1*/
	_strcat(pt, s2);/*concatenates strings*/
	/*Returned pointer*/
	return (pt);
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
 *_strcat - cencatenates two strings
 *@dest: dest val
 *@src:src val
 *Return: idk
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
