#include <stdio.h>
/**
 * main - Program entry point
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
		char i;

		for (i = 97 ; i <= 122 ; i++)
		{
				if (i != 113 &&  i != 101)

				{
						putchar (i);
				}
		}
		putchar ('\n');
		return (0);
}
