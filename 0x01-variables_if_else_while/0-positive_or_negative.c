#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print if the number is positive, negative and zero
 *
 * description: using the main fuction
 * this program prints programming is positive, negative and zero
 * Return:0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
