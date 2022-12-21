#include "main.h"
#include <string.h>
/**
 * rev_string - write a function that prints string in reverse
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	char *rev;
	
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		rev += s[i];
	}
	s = rev;	
}
