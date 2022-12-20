#include "main.h"
#include <string.h>
/**
 * puts_half - write a function that prints characters
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;
	int length;

	length = (int) (strlen(str));
	i = 0;
	if (length % 2 != 0)
		i = (length - 1) / 2;
	else
		i = length / 2;
	while (i < length)
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
