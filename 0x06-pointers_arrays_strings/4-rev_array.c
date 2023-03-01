#include "main.h"

/**
 * reverse_array - reverse array of ints
 * @a: array
 * @n: no of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
