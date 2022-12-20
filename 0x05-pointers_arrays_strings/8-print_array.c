#include "main.h"
#include <string.h>
/**
 * print_array - write a function that prints string in reverse
 * @a: array to be printed
 * @n: number of array elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n ; i++)
		printf("%d, ", a[i]);
	putchar('\n');
}
