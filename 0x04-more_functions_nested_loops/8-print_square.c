#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_line- prints numbers from 0 to 14 10 iterations
 * @size: number of times to print character in square shape
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');
}
