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
		if (c == 0 || str[c - 1] == ' ' || str[c - 1] == '\t' i ||
			str[c - 1] == '\n' ||
			str[c - 1] == ',' || str[c - 1] == ';' ||
			str[c - 1] == '.' || str[c - 1] == '!' ||
			str[c - 1] == '?' || str[c - 1] == '"' ||
			str[c - 1] == '(' || str[c - 1] == ')' ||
			str[c - 1] == '{' || str[c - 1] == '}')
		{
			str[c] -= 32;
		}

	}
	c++;
	}
	return (str);
}

