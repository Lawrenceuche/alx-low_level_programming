#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: is the argument for the function
 * Return: 1 on success and 0 in fail
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	
	return (0);
}
