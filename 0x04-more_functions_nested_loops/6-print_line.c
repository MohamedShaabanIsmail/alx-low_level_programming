#include <stdio.h>
/**
 * print_line - write _
 * @n: number
 * Return: doesn't exist
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
		putchar('\n');
	}
	putchar('\n');
}
