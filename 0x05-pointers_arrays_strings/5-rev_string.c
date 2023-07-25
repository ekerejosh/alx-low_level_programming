#include "main.h"
#include <stdio.h>
/**
 * rev_string - Reverse an input string
 * @s: the character to be reversed
 * Return: no return value
 */
void rev_string(char *s, int length)
{
	int length = string_length(s);

	int i = length - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
}
