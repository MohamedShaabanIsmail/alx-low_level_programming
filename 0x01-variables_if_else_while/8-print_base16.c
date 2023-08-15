#include <stdio.h>
/**
 * main - start main
 * Description: write hexa number
 * Return: 0 (success)
*/
int main(void)
{
	int i, y;

	for (i = 0; i < 10 ; i++)
		putchar('0' + i);
	for (y = 'a'; y <= 'f' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
