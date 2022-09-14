#include "main.h"

/**
 *  print_alphabet_x10 - function to print lowercase 10 times
 * followed by a new line.
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char l, x;

	for (x = 0; x <= 9; x++)

	{
		for (l = 'a'; l <= 'z'; l++)

		{
			_putchar(l);
		}
		_putchar('\n');
	}
	
}
