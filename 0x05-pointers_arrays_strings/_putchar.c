#include <unstid.h>
#include "main.h"
/**
 * _putchar - write char
 * @c: parameter
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
