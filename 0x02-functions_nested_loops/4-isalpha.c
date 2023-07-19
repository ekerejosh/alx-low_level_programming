#include "main.h"
/**
 * _isalpha - Checks if the character is an alphabetic character
 * @c: The charcter to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
