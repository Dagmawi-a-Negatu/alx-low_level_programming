#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area of src to dest
 * @dest: pointer to be retured
 * @src: pointer to copy memory area from
 * @n: number of allowed bytes to copy from src
 *
 * Return: returns a pointer to the memory area of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
