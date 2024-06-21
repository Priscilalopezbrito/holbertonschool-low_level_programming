#include <stdio.h>
/**
 * fizzbuzz - Prints the numbers from 1 to 100
 */
void fizzbuzz(void)
{
	int n;

	for (n = 1 ; n <= 100 ; n++)
	{
		if (n % 3 == 0  &&  n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
		printf("%d", n);
		}
		printf(" ");
	}
	printf("\n");
}
/**
 *main- entry point
 *Return: 0 on sucess.
 */
int main(void)
{
fizzbuzz();
return (0);
}


