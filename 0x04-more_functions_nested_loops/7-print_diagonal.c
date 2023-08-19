#include <stdio.h>
/**
 * print_diagonal - draws a diagonal
 * @n: parameter
 * Return: doesn't exist
 */
void print_diagonal(int n)
{
	int i, e, j;

	for (i = 0; i < n; i++)
	{
		for (e = i; e > 0; e++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
}
