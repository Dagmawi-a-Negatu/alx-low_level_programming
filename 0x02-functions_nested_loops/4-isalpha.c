#include <stdio.h>
#include "main.h"
#include <ctype.h>
/*
 * include prototype function
 *cytpe.h for islower builtin function
 */

/**
 *_isalpha - return 1 if parameter value is lowercase, otherwise 0
 *@c: value to be checked
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
