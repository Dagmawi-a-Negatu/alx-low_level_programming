#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*
 * include prototype function
 *cytpe.h for islower builtin function
 */

/**
 *print_sign - return 1 if greater than 0, 0 if is 0, -1 if less than 0
 *@n: value to be checked
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return ('+', 1);
	}
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	printf("0");
	return (0);
}
