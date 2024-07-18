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
char (*get_op_function(char *s))(char)
{
	/*array of format specifier structures*/
	struct_name arr[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}};

	int i;/*index to iterate*/
	i = 0;/*start at 0*/
	
	/*
	 * Find the string that matches
	 * the character pointed to by s.
	 * Increment if not null and increment
	 * if is not a match.
	 */
	while (arr[i].pf != NULL && *(arr[i].pf) != *s)
	{
		i++;
	}
	/*
	 * If index is NULL return NULL
	 */
	if (arr[i].pf == NULL)
	{
		return (NULL);
	}
	/*
	 * return function pointer
	 * from array of struct
	 */
	return (arr[i].f);
}
