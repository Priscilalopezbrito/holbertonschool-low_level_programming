#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 *op_add- returns the sum of a and b
 *@a: num1
 *@b: num 2
 *Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub- returns the sub of a and b
 *@a: num1
 *@b: num 2
 *Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul- returns the mul of a and b
 *@a: num1
 *@b: num 2
 *Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div- returns the div of a and b
 *@a: num1
 *@b: num 2
 *Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	else
	{
		return (a / b);
	}
}
/**
 *op_mod- returns the mod of a and b
 *@a: num1
 *@b: num 2
 *Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit (100);
	}
	else
	{
		return (a % b);
	}
}

