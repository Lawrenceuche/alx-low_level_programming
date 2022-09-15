#include "main.h"
#include <stdio.h>
/**
 * _isupper(int c) -  function that checks for uppercase character.
 * @c: parameter that is to be checked
 * Return: 0
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'z')
	{
		printf("%c: 1\n", c);
	}
	else if (c >= 'a' && c <= 'z')
	{
		printf("%c: 0\n", c);
	}
	return (0);
}
