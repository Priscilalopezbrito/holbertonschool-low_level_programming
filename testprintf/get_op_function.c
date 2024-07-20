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
int (*get_op_function(char str))(va_list)
{
	/*array of format specifier structures*/
	 print_fs arr[] ={
		{"c", print_char},
		{"s", print_string},
		{"i", print_i_d},
		{"d", print_i_d},
		{NULL, NULL}};

	int index;/*index to iterate*/
	index = 0;/*start at 0*/
	
	/*
	 * Find the string that matches
	 * the character pointed to by s.
	 * if is not a match return NULL.
	 */
	while (arr[index].format_specifier != NULL)/*If not NULL*/
	{
		if (* arr[index].format_specifier == str)/*If index format specifier match  str*/
		{
			return (arr[index].funcpoint);/*Execute function struct array*/
		}
		index++;/*increment ultil match*/
	}
		return (NULL);/*If NULL retorna NULL*/
}


