#include<stdio.h>

/**
 * main - Write a program that
 * prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: program should end with the value 0
 */
int main(void)
{
	int i = 0;
	char base16[16] = "0123456789abcdef";

	for (i = 0; (unsigned int long)i < sizeof(base16); i++)
	{
		putchar(base16[i]);
	}
	putchar('\n');

	return (0);
}
