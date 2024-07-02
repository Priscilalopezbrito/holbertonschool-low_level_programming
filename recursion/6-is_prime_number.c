#include "main.h"

int _prime_check(int n, int i);

/**
 * _prime_check- check
 * @n: value n
 * @i: int
 * Return: 1 0
 */
int _prime_check(int n, int i)
{
	if (n % i == 0 && i != n)
	{
		return (0);
	}
	if (i + i > n)
	{
		return (1);
	}
	else
	{
		return (_prime_check(n, i + 1));
	}
}

/**
 * is_prime_number- function that returns 1 if the
 * input integer is a prime number,
 * otherwise return 0.
 * @n: value n
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
	return (_prime_check(n, 2));
	}
}
