#include "main.h"

/**
 * print_most_numbers - checks for checks for a digit (0 through 9).
 *
 * Return: sucess
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 58; x++)
	{
		if (x == 50 || x == 52)
		{
			continue;
		}
		else
		{
			_putchar(x + '0');
		}
	}

	_putchar('\n');
}
