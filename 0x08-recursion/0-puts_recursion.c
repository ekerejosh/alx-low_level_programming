#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - print string
 * @s: The string to be printed
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
