#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/*
 *main. h file for print prototype function delceration
 */

/**
 * print_last_digit - print last digit value of n
 *@n: value to be checked
 *
 *Return: always return 0
 */

int print_last_digit(int n)
{
	printf(" %d", n % 10);
	return (0);
}
