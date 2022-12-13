#include <stdio.h>
#include "main.h"
/*
 *main. h file for print prototype function delceration
 */

/**
 * print_alphabet - print lowecase letters followed by a new line
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	puthcar('\n');
}
