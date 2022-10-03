#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
		printf("%s\n", argv[counter]);
	return (0);
}

