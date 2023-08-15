#include <stdio.h>
/**
 * main - start main
 *
 * Description: write alphabet
 *
 * Return: 0 (success)
*/
int main(void)
{
	int a, i;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
