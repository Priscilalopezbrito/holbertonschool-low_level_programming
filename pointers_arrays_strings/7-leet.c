#include "main.h"
/**
 *leet- capitalizes all words of a string
 *@str: char point
 *Return: str
 */
char *leet(char *str)
{
	char leet[260] = {0};
	int i;

	leet['a'] = '4';
	leet['A'] = '4';
	leet['e'] = '3';
	leet['E'] = '3';
	leet['o'] = '0';
	leet['O'] = '0';
	leet['t'] = '7';
	leet['T'] = '7';
	leet['l'] = '1';
	leet['L'] = '1';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet[(unsigned char) str[i]])
		{
			str[i] = leet[(unsigned char) str[i]];
		}
	}
	return (str);
}
