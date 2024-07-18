#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int  print_char(char c)
{
	putchar(c);
}

int  print_string(char *s)
{
	while (*s)
	{
		putchar(*s++);
	}
}

