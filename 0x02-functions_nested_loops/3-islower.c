#include <stdio.h>
#include "main.h"

/*
 * include prototype function
 *
 */

/**
 * _islower - return 1 if parameter value is lowercase, otherwise 0
 *@c: value to be checked
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
