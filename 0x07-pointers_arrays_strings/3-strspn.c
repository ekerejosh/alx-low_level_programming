#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strspn - gets the lebgth of a prefix substring
 * @s: pointer to the string in which to calculate legnth og prefix
 * @accept: pointer to the string combining characters
 * Return: No of accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		length++;
		s++;
	}
	return (length);
}
