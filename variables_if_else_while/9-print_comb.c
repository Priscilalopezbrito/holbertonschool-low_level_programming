#include <stdio.h>
/**
 * main - Program entry point
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
	{
		putchar(i);
			if (i != '9')
			{
				putchar(44);
				putchar(32);
			}
	}
	putchar ('\n');
	return (0);
}
