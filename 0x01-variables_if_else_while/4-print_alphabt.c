#include <stdio.h>
/**
 * main - program that prints all the lowercase in an alphabet
 * followed by a new line 
 * expect q and e
 * */
int main(void)
{
	char ch = 'a';
	for (ch ='a'; ch <='z'; ch++);
	!((ch = 'q')&&(ch ='e'));
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
