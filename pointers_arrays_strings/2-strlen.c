#include "main.h"
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
