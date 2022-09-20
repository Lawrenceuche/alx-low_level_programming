#include "main.h"

/**
 * swap_int - swaps the value of int a and int b
 *
 * @a: first int parameter  to swap
 * @b: second int parameter  to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
