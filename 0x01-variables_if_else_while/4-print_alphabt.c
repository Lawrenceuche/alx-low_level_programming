#include <stdio.h>
/**
 * main - program that prints all the lowercase in an alphabet
 * followed by a new line
 * expect q and e
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
