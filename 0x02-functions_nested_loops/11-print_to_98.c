#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @x: the counting number
 */
void print_to_98(int x)
{
	for (x = 0; x <= 98; x++)
	{
		printf("%d, \n", x++);
	}
	while (x >= 98)
	{
		printf("%d, \n", x--);
	}
}

