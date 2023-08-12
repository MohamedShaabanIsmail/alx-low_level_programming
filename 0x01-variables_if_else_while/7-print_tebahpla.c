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
	for (int a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar("\n");
	return (0);
}
