#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 *main- adds positive numbers
 *@argc: count
 *@argv: array
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int index;
	int add;

	if (argc == 1)/*if theres no number print 0*/
	{
		printf("0\n");
		return (0);
	}
	add = 0;
	for (index = 1; index < argc; index++)
	{
		if (!isdigit(*argv[index]))/*if is not a digit print Error*/
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[index]);/**/
	}
	printf("%d\n", add);
	return (0);
}
