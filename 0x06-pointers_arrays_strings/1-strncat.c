#include "main.h"
#include <string.h>

/**
 * *_strncat - concatnates two strings
 * @dest: string to be added on
 * @src: strubg to be appended
 * @n:
 * Return: concatnated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
