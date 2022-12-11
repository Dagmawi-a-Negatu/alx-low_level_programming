#include <stdio.h>

/**
 * main - Print lowercase and uppercase letters follwed by new line
 *
 * Return: Return 0 for functionality
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
