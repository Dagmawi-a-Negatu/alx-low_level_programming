#include "main.h"

/**
 * swap_int- swap integer pointer's value
 * @a: pointer value 1
 * @b: pointer value 2
 */

void swap_int(int *a, int *b)
{
	int a_val;
	int b_val;

	&a_val = a;
	&b_val = b;
	*a = b_val;
	*b = a_val;
}
