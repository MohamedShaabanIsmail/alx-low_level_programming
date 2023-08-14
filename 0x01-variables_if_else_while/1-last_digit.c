#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - start main
 *
 * Description: check number greater or less than 6 or zero
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n, y, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n;
	n = n << 1;
	n = n >> 1;
	num = y - n;
	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", y, num);
	else if (num == 0)
		printf("Last digit of %d is %d and is 0\n", y, num);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", y, num);
	return (0);
}
