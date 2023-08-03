#include <stdio.h>
#include "main.h"
/**
 * _print_rec_recursion - Print a string in reverese
 * @s: The string to be printed in reverse
 * Return: no return value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	putchar(*s);
}
