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
	int len;
	
	len = (int) strlen(s);
	rev = s;
	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len ; j++)
			s[j] = rev[i];
	}	
}
