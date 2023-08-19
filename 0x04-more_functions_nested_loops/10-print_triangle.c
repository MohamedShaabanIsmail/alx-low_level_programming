#include <stdio.h>
/**
 * print_triangle - draw triangle
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, e, j;

	for (i = 1; i <= size; i++)
	{
		for (e = 0; e < size - i; e++)
			putchar(' ');
		for (j = 0; j < i; j++)
			putchar('#');
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
