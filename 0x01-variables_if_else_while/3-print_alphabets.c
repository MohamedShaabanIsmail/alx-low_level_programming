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
	int a, z;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (z = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
