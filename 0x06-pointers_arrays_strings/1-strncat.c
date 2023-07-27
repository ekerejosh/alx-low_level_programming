#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination char string
 * @src: source string
 * @n: maximum number of character we want to copy from src to dest
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}
	*dest_end = '\0';
	return (dest);
}
