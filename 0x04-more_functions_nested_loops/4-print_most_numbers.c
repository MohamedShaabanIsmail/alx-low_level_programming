#include <stdio.h>
/**
 * print_most_numbers - write numbers
 * Description: print digit
 * Return: doesn't exist
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue ;
		putchar('0' + i);
	}
	putchar('\n');
}
