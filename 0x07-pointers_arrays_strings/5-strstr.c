#include <stdio.h>
/**
 * main - check the code for AL#include <stdio.h>
/**
 * main - check the code for ALX students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *s = "world of this";
        char *f = "world";
        char *t;

        t = _strstr(s, f);
        printf("%s\n", t);
        return (0);
}
