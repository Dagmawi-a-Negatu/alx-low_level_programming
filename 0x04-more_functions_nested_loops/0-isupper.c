#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 *
 * Return: Return 1 if c character, otherwise return 0
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
