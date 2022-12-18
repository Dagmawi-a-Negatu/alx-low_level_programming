#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_square- prints numbers from 0 to 14 10 iterations
 * @size: number of times to print character in square shape
 */
void print_square(int size)
{
	int i;
	int j;
	int k;
	int space;
	int astericnum;

	space = size;
	astericnum = 1;
	for (i = 0; i < size; i++)
	{
		for (k = 1; k < space; k++)
			_putchar(' ');
		for (j = 0; j < astericnum; j++)
			_putchar('#');
		space--;
		astericnum++
		_putchar('\n');
	}
	
	if (size <= 0)
		_putchar('\n');

}
