#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @n: number of elements to br printed
 * @a: array of elements
 * Return: no return
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
