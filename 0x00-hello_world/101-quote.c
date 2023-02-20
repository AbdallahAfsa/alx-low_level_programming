#include <stdio.h>
#include <unistd/h>
/**
 * main - Entry point
 * description: C program that prints a line a new line, to the standard error.
 * return: Always 0 (success)
 */
int main(void)
{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
