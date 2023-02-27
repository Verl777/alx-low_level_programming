#include "main.h"

/**
 * swap_int - swaps value of two ints
 * @a: first int
 * @b: second int
 * Return: 0 Always sucess
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
