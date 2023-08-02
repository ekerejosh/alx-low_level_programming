#include "main.h"
#include <stdio.h>
/**
 * _memcpy - This function copies the memory area
 * @dest: A pointer to the destination mempry area where you want to copy to.
 * @src: A pointer to the source memory area
 * @n: The number of bytes you want to copy from source to the destination
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
