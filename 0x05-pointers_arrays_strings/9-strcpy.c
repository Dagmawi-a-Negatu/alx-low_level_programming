#include "main.h"
#include <string.h>
/**
 * *_strcpy - write a function that copies the string pointed by dest
 * @dest: pointer to be returned
 * @src: pointer variable to be copied from
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
