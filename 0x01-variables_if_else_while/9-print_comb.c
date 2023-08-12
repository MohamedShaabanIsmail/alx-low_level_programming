#include <stdio.h>
/**
 * main - start main
 *
 * Description: write separated digit
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;
	for(i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 9)
			putchar(", ");
	}
	putchar('\n');
	return (0);
}
