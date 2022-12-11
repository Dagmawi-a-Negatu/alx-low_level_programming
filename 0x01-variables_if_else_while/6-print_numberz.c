#include <stdio.h>

/**
 * main - Print all single digit numbers using puthchar
 *
 * Return: 0 for main functionality
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
