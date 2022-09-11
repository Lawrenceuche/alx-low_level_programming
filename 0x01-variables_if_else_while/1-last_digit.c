#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable each time it is executed
 * print out the last digit and codition it
 * Return:0
 */
int main(void)
{
	int n;
	int lDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lDigit = n % 10;
	if (lDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lDigit);
	}
	else if (lDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lDigit);
	}
	return (0);
}



