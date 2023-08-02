#include "main.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area you want to fill with constant byte
 * @b: The constant byte value you want to fill the memory with
 * @n: The number of bytes you want to fill with the constant byte
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
