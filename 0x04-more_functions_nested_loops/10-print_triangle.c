#include <stdio.h>
/**
 * print_triangle - draw triangle
 * @size: parameter
 */
void print_triangle(int size)
{
	int i, e;

	for (i = 0; i < size; i++)
	{
		for (e = 0; e < size - 1; e++)
			putchar(' ');
		for (j = 0; j < i + 1; j++)
			putchar('#');
		putchar('\n');
	}
}
