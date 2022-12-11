#include <stdio.h>

/**
 * main - print all numbers of base 16 and lowecase followed by new line
 *
 * Return: 0 for main functionality
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (i = 'a'; i <= 'f'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
