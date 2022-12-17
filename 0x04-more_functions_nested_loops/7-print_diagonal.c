#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_line- prints numbers from 0 to 14 10 iterations
 * @n: number of times to print character
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
