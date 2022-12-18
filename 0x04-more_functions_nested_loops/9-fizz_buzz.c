#include <stdio.h>

/**
 * main- Fizz-buzz interview question
 *
 * Return: always return 0
 */
void main(void)
{
	int i;
	int n;

	n = 100;
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
}
