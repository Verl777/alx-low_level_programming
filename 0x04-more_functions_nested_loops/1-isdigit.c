#include "main.h"

/**
 * _isdigit - checks if int is a digit
 * @c: int to be checked
 * return: 1 for success and 0 for otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);
	else

		return (0);
}
