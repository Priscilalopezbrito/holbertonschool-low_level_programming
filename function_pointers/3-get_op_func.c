#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func-function that selects the correct function to perform
 *@s: *s
 *@int:
 *@int:
 *Return: returns a pointer to the function
 *that corresponds to the operator given
 *as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	/*array of operators*/
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	/*index variable*/
	int i;
	/*initialize index variable*/
	i = 0;
	/*find matching operator in array
	 *if not null increment
	 *if operator dont match string increment
	 * */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	/*if index of array struct op
	 * is null, return null*/
	if (ops[i].op == NULL)
	{
		return (NULL);
	}
	/*return function point of index*/
	return (ops[i].f);
}
