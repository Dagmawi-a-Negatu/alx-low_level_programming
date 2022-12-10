#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * Standard Input output
 * Time builtin function
 * Other builtin function
*/

/**
 * main - Print last digit of number and if it's 0, greater than 5, less than 6
 *
 * Description: This is a longer description
 * Print random generated number.
 * Caculate and print last digit of generated number.
 * Check if last digit is greater than 5, equal to 0 or less than 6 and not 0
 *
 * Return: Return integer 0 for main functionality
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);

}
