#include <stdio.h>
#include <string.h>
/**
 * puts_half - function
 * @str: parameter
 */
void puts_half(char *str)
{
	int i;

	for (i = strlen(str) / 2; str[i] != '\0'; i++)
		printf("%c", str[i]);
	printf("\n");
}
