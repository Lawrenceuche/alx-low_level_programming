#include <stdio.h>
/**
 * main - program taht print the alphabet in lowercase
 * followed by a new line
 * Return:0
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)

	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
