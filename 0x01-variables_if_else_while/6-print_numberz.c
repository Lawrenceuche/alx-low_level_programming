#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base ten
 * starting from zero,
 * followed by a new line.
 * Return : 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
