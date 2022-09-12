#include <stdio.h>
/**
 * main - program  prints all possible combinations of
 * single-digit numbers.Numbers must be separated by ,,
 * followed by a space
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)

	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
