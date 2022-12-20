#include "main.h"
#include <string.h>
/**
 * puts_half - write a function that prints characters
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	if (i % 2 != 0)
		i = (int) ((strlen(str) - 1) / 2);
	else
		i = (int) (strlen(str) / 2);
	while (i < (int) strlen(str))
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
