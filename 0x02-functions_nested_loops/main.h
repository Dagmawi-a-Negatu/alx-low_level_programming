#include <stdio.h>

/**
 * main - prints _putschar followed by a new line
 *
 * Return: 0 for interger return functionality
 */

int main(void)
{
	printf("_putchar\n");
	return (0);
}

/**
 * print_alphabet - print all lowercase letters
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i ++)
		putchar(i);
	putchar('\n');
}
