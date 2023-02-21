#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * _abs - computes absolute value of integer
 * @x: number to be computed
 * Return : always a sucess
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
