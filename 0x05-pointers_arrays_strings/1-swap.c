#include <stdio.h>
/**
 * swap_int - function
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
