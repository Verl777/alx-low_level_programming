#include "main.h"
/**
 * _abs - Computes the absolute value.
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
