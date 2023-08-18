#include <stdio.h>
/**
 * _isupper - function check if c upper case
 * @c: parameter for function
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
