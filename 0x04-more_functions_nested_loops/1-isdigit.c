#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if character is uppercase
 * @c: character to be checked
 *
 * Return: Return 1 if c digit, otherwise return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
