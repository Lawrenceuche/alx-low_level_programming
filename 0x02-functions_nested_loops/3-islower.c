#include "main.h"
/**
 * _islower - check for lowercase character
 * followed by a new line
 * @c: is the argument for the function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
