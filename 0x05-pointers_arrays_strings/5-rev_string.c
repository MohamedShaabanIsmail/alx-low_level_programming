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

	for (i = 0; i < strlen(s) / 2; i++)
	{
		c = s[i];
		s[i] = s[strlen(s) - i];
		s[strlen(s) - i] = c;
	}
}
