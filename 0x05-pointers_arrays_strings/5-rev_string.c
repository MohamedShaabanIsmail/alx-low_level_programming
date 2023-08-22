#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * rev_string - function
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;
	char c;
	int e = strlen(s) / 2;

	for (i = 0; i < e; i++)
	{
		c = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = c;
	}
}
