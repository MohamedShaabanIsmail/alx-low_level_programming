#include <stdio.h>
/**
 * print_square - function prints a square
 * @size: parameter
 */
void print_square(int size)
{
	int i, e;

	if (size <= 0)
		putchar('\n');
	for (i = 0; i < size ; i++)
	{
		for (e = 0; e < size; e++)
			putchar('#');
		putchar('\n');
	}
}
