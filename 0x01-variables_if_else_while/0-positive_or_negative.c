#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**more headers goes there
 * printf function definition
 * For some builtin function
 * For time builtin function
 */

/**betty style doc for function main goes there 
 * main - Check if number is pos, neg or zero
 *
 * Description: This is a longer description
 * Generate random number
 * Check generated number value
 * Print if number is positive, negative or zero
 * Return: 0 for main integer return functionality
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n); 
	if (n == 0)
		printf("%d is zero\n", n);
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
