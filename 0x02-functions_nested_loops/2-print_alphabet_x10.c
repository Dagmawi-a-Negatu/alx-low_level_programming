#include <stdio.h>
#include "main.h"
/*
 *main. h file for prototype function delceration
 */

/**
 * print_alphabet_x10 - print lowecase letters 10x followed by a new line
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; i < 10; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			putchar(i);
	}
	putchar('\n');
}
