#include <stdio.h>

/**
 * main - Print lowercase letters except q and e
 *
 * Return: 0 for main functionality
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
