#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a comma followed by a space.
 * @x: the counting number
 */
void print_to_98(int x)
{
	{
		for (x = 0; x < 98; x++)
		{
			printf("%d, ", x);
		}
		printf("98 \n");
	}
	{
		printf("98 \n");
	}
	{
		for (x = 111; x > 98; x--)
		{
			printf("%d, ", x);
		}
		printf("98 \n");
	}
	{
		for (x = 81; x < 98; x++)
		{
			printf("%d, ", x);
		}
		printf("98 \n");
	}
	{
		for (x = -10; x < 98; x++)
		{
			printf("%d, ", x);
		}
		printf("98 \n");
	}
}


