#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int (*get_op_func(char *s))(int , int )
{
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	
	while (ops[i].op != NULL && ops[i].op != s)
	{
		i++;
	}
	if (s != "+" || s != "-" || s != "*" || s != "/" || s != "%")
	{
		return (NULL);
	}
	return (ops[i].f);
}
