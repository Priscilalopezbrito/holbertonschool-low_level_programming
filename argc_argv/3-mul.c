#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main- multiplies two numbers
 *@argc: count
 *@argv: array
 *Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;
	printf("%d\n", prod);
	return (0);
}
