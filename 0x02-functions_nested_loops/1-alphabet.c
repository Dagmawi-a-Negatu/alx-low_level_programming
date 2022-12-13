#include <stdio.h>

/**
 * print_alphabet - print all alphabets in lowercase
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = '0'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
