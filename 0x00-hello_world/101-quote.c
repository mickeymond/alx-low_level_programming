#include <stdio.h>
#include <string.h>

/**
 * main - Write a C program that prints exactly
 * and that piece of art is useful\" - Dora Korpar, 2015-10-19
 * followed by a new line.
 *
 * Return: program should end with the value 1
 */
int main(void)
{
	char str1[32] = "and that piece of art is useful";
	char str2[24] = "Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\" - %s\n", str1, str2);

	return (1);
}
