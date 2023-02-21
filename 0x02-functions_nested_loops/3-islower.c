#include "main.h"
/**
 * _islower -  checks for the lowercase
 * @c: character being checked
 * Return: 1 for lowercase and 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
