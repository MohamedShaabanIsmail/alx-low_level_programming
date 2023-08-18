#include <stdio.h>
/**
 * more_numbers - write numbers
 * Description: print digit
 * Return: doesn't exist
 */
void more_numbers(void)
{
	int i, e;

	for (i = 0; i < 10; i++)
	{
		for (e = 0; e < 15; e++)
			putchar('0' + e);
		putchar('\n');
	}
	putchar('\n');
}
