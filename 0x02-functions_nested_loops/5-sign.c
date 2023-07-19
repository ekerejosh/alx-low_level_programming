#include "main.h"
/**
 * print_sign - Display the sign of a character
 * @c: Character to be checked
 * Return: 1 if character is greater than 0, 0 if 0 and -1 if less than 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
