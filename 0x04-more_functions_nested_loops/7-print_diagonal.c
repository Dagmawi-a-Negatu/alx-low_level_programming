#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_diagonal- print diagonal shape character
 * @n: number of times to print character
 */
void print_diagonal(int n)
{
	int i;
	int x;

	/* x = 0; */
	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');
		/* x++; */
		/* for (int j = 0; j < x; j++) */
			/* _putchar(' '); */
	}

	_putchar('\n');
}
