#include "main.h"
#include <string.h>
/**
 * puts2 - write a function that prints characters
 * @s: string to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i+2)
		putchar(str[i]);
	putchar('\n');
}
