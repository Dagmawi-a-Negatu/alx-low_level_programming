#include "main.h"
#include <string.h>
/**
 * rev_string - write a function that prints string in reverse
 * @s: string to be printed
 */

void rev_string(char *s)
{
	int i;
	char ch;
	char *rev;
	
	rev = "1";
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		ch = s[i];
		strncat(rev, &ch, 1);
	}
	s = rev;
}
