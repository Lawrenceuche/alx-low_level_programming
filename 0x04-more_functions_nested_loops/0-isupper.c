#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper(int c) -  function that checks for uppercase character.
 * @c: parameter that is to be checked
 * Return: 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
