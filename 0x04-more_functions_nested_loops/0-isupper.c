#include "main.h"

/**
 * _isupper - checks for the uppercase character
 * @c: character to be checked
 * Return: 1 success and 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
