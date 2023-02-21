#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * _abs - computes absolute value of integer
 * @x: number to be computed
 * Return: absolute value
 */
int _abs(int x)
{
	if (x < 0)
	{
		int absolute_value;

		absolute_value = x * -1;

		return (absolute_value);
	}
	return (x);
}
