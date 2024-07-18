#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *get_op_function-function that selects the
 *correct function to perform format specifier
 *@s: *s pointer to char
 *@char: check
 *Return: returns a pointer to the function
 *that corresponds to the format specifier given
 *as a parameter
 */
int (*get_format_func(char *str))(va_list)
{
	/*array of format specifier structures*/
	printf_function arr[] =
	{
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	int index;/*index to iterate*/
	index = 0;/*start at 0*/
	
	/*
	 * Find the string that matches
	 * the character pointed to by s.
	 * Increment if not null and increment
	 * if is not a match.
	 */
	while (arr[index].format_specifier != NULL)
	{
		if (arr[index].format_specifier == str)/*pf[0]??? s[0]??*/
		{
			return (arr[index].funcpoint);
		}
		index++;
	}
		return (NULL);
}
