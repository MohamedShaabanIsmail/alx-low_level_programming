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
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar("\n");
	return (0);
}
