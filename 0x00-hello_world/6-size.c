#include <stdio.h>
/**
 * main - Entry point
 * description: A C program that prints the size of various types
 * Return: Always return 0
 */
 int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a char: %c 1 byte(s)\n", a);
	printf("Size of a char: %d 1 byte(s)\n", b);
	printf("Size of a char: %lu 1 byte(s)\n", c);
	printf("Size of a char: %lu 1 byte(s)\n", d);
	printf("Size of a char: %f 1 byte(s)\n", f);
	return (0);
}
