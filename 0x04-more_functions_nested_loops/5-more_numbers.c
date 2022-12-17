#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * more_numbers- prints numbers from 0 to 14 10 iterations
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '14'; i++)
			_putchar(i);
	}
	_putchar('\n');
}
