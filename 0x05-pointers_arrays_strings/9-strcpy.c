#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copy the string pointed to by src including (\0) to dest
 * @dest: The pointer to which the string is copied to
 * @src: The strings are copied from here
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
