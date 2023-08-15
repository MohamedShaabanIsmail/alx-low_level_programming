#include <stdio.h>
int main(void)
{
	int i, y;

	for (i = 0; i < 10 ; i++)
		putchar('0' + i);
	for (y = 0; y < 7 ; y++)
		putchar('0' + y);
	putchar('\n');
	return (0);
}
