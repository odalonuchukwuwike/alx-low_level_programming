#include <stdio.h>
/**
 *main - A program that uses printf function to output a string
 * Return: 0 (Using the printf function to print strings to our output console)
 */

int main(void)
{
	char a; int b; long int c; long long int d; float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	return (0);
}
