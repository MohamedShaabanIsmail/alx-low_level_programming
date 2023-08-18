#include <stdio.h>
/**
 * more_numbers - write numbers
 * Description: print digit
 * Return: doesn't exist
 */
void more_numbers(void)
{
	int i, e, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (e = 0; e < 15; e++)
		{
			if (e == 10)
				j = 0;
			if (e > 9)
				putchar('1');
			putchar('0' + j);
			j++;
		}
		putchar('\n');
	}
}
