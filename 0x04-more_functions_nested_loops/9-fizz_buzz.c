#include <stdio.h>
/**
 * main - start main
 * Description: print digit and character
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i != 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i != 0)
			printf("Fizz ");
		else if (i % 5 == 0 && i != 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}