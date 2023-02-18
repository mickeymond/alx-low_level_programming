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
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; (unsigned int long)i < sizeof(alphabet); i++)
	{
		if (alphabet[i] == 'q' || alphabet[i] == 'e')
		{
			continue;
		}
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}
