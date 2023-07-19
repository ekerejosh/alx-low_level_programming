#include "main.h"
/**
 * print_last_digit - Print the last digti of a number
 * @n: The number whose last digit is printed
 * Return: (0) Success
 */
int print_last_digit(int n)

{
	int last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar('0' + last_digit);
	return (0);
}
