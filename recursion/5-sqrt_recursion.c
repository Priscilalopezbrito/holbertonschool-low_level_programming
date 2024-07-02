#include "main.h"

int calc_sqrt(int n, int x);
/**
 * calc_sqrt- check sqrt
 * @n: value n
 * @x:x
 * Return: 1 0
 */
int calc_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	else
	{
		return (calc_sqrt(n, x + 1));
	}
}


/**
 * _sqrt_recursion - returns natural square root of a number.
 * @n:number
 * Return: If n does not have a natural square
 * root, the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calc_sqrt(n, 0));
}
