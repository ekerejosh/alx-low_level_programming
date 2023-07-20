#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * positive_or_negative - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}