#include "main.h"
#include <string.h>
/**
 * puts2 - write a function that prints characters
 * @s: string to be printed
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (i < (int) strlen(str))
	{
		putchar(str[i];
		i = i + 2;
	}
	putchar('\n');
}
