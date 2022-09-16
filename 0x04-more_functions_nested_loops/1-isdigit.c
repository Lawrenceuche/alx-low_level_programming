#include <stdio.h>
#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: is the argument for the function
 * Return: 1 on success and 0 in fail
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
