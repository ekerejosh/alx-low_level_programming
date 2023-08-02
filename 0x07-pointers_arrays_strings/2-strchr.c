#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: This is a pointer to string in which you want to search for character
 * @c: This is the character you want to search for within the string
 * Return: (s) if character is found and (NULL) is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	}
	s++;
	return (NULL);
}
