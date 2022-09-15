#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper(int c) -  function that checks for uppercase character.
 * @c: parameter that is to be checked
 * Return: 1 on success and 0 on fail
 */

int _isupper(int c)
{

	c = 65;

	if (c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
