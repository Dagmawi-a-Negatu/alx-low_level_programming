#include <stdio.h>

/**
 * main - print all possible combinations of singel-digit numbers
 *
 * Return: 0 for main functionality
 */
int main(void)
{
	int i;

	for (i = '1'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
			putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
