#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: This is a pointer to string in which you want to search for character
 * @c: This is the character you want to search for within the string
 * Return: the pointer to the first occurence of the character c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	return ('\0');
}
