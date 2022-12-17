#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_numbers- checks if character is uppercase
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
