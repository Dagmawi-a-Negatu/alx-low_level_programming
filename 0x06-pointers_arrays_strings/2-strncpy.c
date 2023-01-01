#include "main.h"
#include <string.h>

/**
 * *_strncpy - concatnates two strings
 * @dest: string to be added on
 * @src: strubg to be appended
 * @n:number of allowed bytes
 * Return: concatnated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
