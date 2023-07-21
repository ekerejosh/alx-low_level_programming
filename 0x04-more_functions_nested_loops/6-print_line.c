#include "main.h"
/**
 * print_line - Draw a straight line of underscores
 * @n: The number of times the character is printed
 *
 * Return: no return
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
