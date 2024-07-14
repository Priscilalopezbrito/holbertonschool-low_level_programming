#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - prints operation
 * @argc: arg count
 *@argv: arg vector
 *Return: calc
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int calc;
	char operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];
/* the result of all operations can be stored in an int*/
	calc = (get_op_func(argv[2])(num1, num2));
	printf("%d\n", calc);
/*if the operator is none of the above, print Error*/
	if (operator != '+' && operator != '-' &&
		operator != '*' && operator != '/' &&
		operator != '%')
	{
		printf("Error\n");
		exit(99);
	}
/*The program prints the result of the operation, followed by a new line*/
	else
	{
		return ((get_op_func(argv[2]))(num1, num2));
	}
}
