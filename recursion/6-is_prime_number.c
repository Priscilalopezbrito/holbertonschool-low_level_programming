#include "main.h"
/**
 * is_prime_number- function that returns 1 if the
 * input integer is a prime number,
 * otherwise return 0.
 * @n: value n
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int p;

	if (n < 2)
	{
		return (0);
	}
	for (p = 2; p * p <= n; p++)
	{
		if (n % p == 0)
		{
			return (0);
		}
	}
	return (1);
}
