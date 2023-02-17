#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * main - This program will assign a random number
 * to the variable n each time it is executed.
 * Complete the source code in order to print the
 * last digit of the number stored in the variable n.
 *
 * Return: program should end with the value 0
 */
int main(void)
{
	int n;
	int mod10;
	char prefix[14] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod10 = n % 10;
	if (mod10 > 5)
	{
		printf("%s %d is %d and is greater than 5\n", prefix, n, mod10);
	}
	else if (mod10 == 0)
	{
		printf("%s %d is %d and is 0\n", prefix, n, mod10);
	}
	else if (mod10 < 6 && mod10 != 0)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", prefix, n, mod10);
	}
	return (0);
}
