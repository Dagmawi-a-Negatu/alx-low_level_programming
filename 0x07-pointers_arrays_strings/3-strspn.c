#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * *_strchr - Returns initial segment of s consisting only of bytes accept
 * @s: string parameter as initial segment
 * @accept: strings used for number of bytes managment
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ret;


	ret = strchr(s, accept);
	return (ret);
}
