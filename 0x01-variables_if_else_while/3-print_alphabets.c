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
	for (int a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (int a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar("\n");
	return (0);
}
