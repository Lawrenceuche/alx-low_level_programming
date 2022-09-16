#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper -  function that checks for uppercase character.
 * @c: parameter that is to be checked
 * Return: 1 on success and 0 on fail
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
