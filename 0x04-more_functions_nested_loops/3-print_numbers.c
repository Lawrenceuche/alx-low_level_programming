#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers, from 0 to 9,
 *
 * Return: 0
 */
void print_numbers(void)
{
	char x;

	for (x = (0 +'0'); x <= (9 + '0'); x++)
	{
		_putchar(x) - '0';
	}
	_putchar('\n');

}
