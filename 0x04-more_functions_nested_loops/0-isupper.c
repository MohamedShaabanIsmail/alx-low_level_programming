#include <stdio.h>
/**
 * _isupper - check if x is upper case
 * @x: parameter for function
 * Return: 1 or 0
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	return (0);
}
/**
 * main - start main
 * Description: check function
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
