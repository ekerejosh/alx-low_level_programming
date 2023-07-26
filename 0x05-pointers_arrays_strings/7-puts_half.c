#include "main.h"
#include <stdio.h>
/**
 * puts_half - Prints half of a string
 * @str: The character to be checked
 * Return: no return value
 */
void puts_half(char *str)
{
	int length = 0;
	int half_length;

	while (str[length] != '\0')
	{
		length++;
	}

	half_length = (length + 1) / 2;

	for (int i = halfi_length; i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
