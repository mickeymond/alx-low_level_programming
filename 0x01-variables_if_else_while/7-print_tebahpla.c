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
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = sizeof(alphabet) - 1; i >= 0; i--)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
