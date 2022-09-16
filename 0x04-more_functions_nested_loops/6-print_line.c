#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: is the number of times the character should ne printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('_');
	}
}

