#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - prints the length of as tring
 * @s: The string to be counted
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
