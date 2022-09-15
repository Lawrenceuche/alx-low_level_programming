#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @a: The last digit
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int a)
{
	int l_Digit;

	l_Digit = a % 10;

	if (a > 0)
	{
		return (l_Digit);
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (l_Digit * -1);
	}
	_putchar(l_Digit + '0');
	_putchar('\n');
	return (l_Digit);
}
