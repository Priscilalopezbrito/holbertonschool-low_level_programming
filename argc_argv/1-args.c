#include <stdio.h>
#include "main.h"
/**
 *main- prints its name
 *@argc: count
 *@argv: array
 *Return: 0 on success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
