#include "main.h"
/**
 *  _atoi- resets value to 98
 *@s: pointer
 *Return: val atoi
 */
int _atoi(char *s)
{
	int r = 0;
	int p = 1;
	int i = 0;

	if (s[i] == '-')
	{
		p = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		r = r * 10 + (s[i] - '0');
		i++;
	}
		return (p  * r);
}
