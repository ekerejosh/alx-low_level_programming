#include "main.h"
#include <stdio.h>
/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * Return: 0 if s1 and s2 are equal, another number if not
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
