#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area pointed by s*
 * @b: the constant byte 
 * @n: the first n number of bytes to be filled
 *
 * Return: returns a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
