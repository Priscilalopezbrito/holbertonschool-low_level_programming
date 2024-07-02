#include <stdio.h>
#include "main.h"
/**
 *main- prints all arguments it receives
 *@argc: count
 *@argv: array
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}

