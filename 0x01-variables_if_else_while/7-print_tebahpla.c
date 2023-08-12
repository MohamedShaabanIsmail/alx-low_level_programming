#include <stdio.h>
/**
 * main - start main
 *
 * Description: write reverse alphabet
 *
 * Return: 0 (success)
*/
int main(void)
{
	int a;
	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
