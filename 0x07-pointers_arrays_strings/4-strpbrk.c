#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to string to calculate length of the prefix substring
 * @accept: Pointer to string combining characters
 * Return: No. of accepted bytes
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')

	{
	char *current_accept = accept;

	while (*current_accept != '\0')
	{
		if (*s == *current_accept)
		{
			return (s);
		}
		current_accept++;
	}
	s++;
	}
	return (NULL);
}
