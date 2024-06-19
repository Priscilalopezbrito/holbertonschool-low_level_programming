#include <main.h>
/**
 * main - Program entry point
 * Return:  0 on success. Error code otherwise
 */
int main(void)
{
char str[] = "_putchar";
int i;

		for (i = 0; i < 8; i++)
		{
			putchar (str[i]);
		}
	putchar ('\n');
	return (0);
}
