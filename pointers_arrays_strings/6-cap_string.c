#include "main.h"
/**
 *cap_string- capitalizes all words of a string
 *@str: char point
 *Return: str
 */
char *cap_string(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
	if (str[c] >= 'a' && str[c] <= 'z')
	{
		if (str[c - 1] == 32 || str[c - 1] == 44 || str[c - 1] == 59 || str[c] == 46)
		{
			str[c] -= 32;
		}
		if (str[c] == 33 || str[c] == 63 || str[c] == 34 || str[c] == 40)
		{
			str[c + 1] -= 32;
		}
		if (str[c] == 41 || str[c] == 123 || str[c] == 125)
		{
			str[c + 1] -= str[c] - 32;
		}
		if (str[c] == 9 || str[c] == 10)
		{
			str[c + 1] -= 32;
		}
	}
	c++;
	}
	return (str);
}

