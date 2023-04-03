#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prompts the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and it is greater than 5\n",
				n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n",
				n, n % 10);
	}

	return (0);
}
