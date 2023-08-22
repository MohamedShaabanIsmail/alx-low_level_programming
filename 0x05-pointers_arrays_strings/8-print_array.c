#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_array - function
 * @a: first parameter
 * @n: second parameter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
