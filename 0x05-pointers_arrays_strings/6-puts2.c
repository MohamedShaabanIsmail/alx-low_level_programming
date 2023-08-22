#include <stdio.h>
/**
 * puts2 - function
 * @str: parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 1)
			continue;
		printf("%c", str[i]);
	}
	printf("\n");
}
