#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_rev - function
 * @s: parameter
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
