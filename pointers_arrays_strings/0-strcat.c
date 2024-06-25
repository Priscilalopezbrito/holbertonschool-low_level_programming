#include "main.h"
/**
 *_strcat - cencatenates two strings
 *@dest: dest val
 *@src:src val
 *Return: idk
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
