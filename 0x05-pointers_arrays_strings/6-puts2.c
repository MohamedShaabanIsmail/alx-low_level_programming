#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * puts2 - function
 * @str: parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 1)
			continue;
		printf("%c", str[i]);
	}
	printf("\n");
}
