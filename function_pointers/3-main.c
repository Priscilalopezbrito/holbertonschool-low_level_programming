#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (operator != '+' && operator != '-' && operator != '*' && operator != '/' && operator != '%')
	{
		printf("Error\n");
		exit (99);
	}
	
	return ((get_op_func(argv[2])(num1, num2)));
	
}
