#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_triangle- prints numbers from 0 to 14 10 iterations
 * @size: number of times to print character in triangle shape
 */
void print_triangle(int size)
{
	int k;
	int space;

	space = size;
	k = 1;
	if (size <= 0)
		_putchar('\n');
	for (int i = 0; i < size; i++)
	{
		for (int x = 0; x < space - 1; x++)
			_putchar(' ');
		for (int j = 0; j < k; j++)
			_putchar('#');
		_putchar('\n');
		k++;
		space--;
	}

}
