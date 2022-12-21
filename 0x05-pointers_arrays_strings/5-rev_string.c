#include "main.h"
#include <string.h>
/**
 * rev_string - write a function that prints string in reverse
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	int j;
	char *rev;
	
	rev = s;
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		for (j = 0; j < strlen(s); j++)
			s[j] = rev[i];
	}	
}
