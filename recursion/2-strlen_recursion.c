#include "main.h"
/**
 * _strlen_recursion- Write a function that returns the length of a string.
 * @s:pointer *s
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
