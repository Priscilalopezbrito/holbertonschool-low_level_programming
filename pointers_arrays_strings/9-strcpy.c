#include "main.h"
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
