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
	int j;

	x = 1;
	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar('/');
		_putchar('\n');
		for (j = 0; j < x; j++)
			_putchar(' ');
		x++;
	}

	
}
