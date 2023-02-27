#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: success
 */

void _puts(char *str)
{
	int i = 0;
	while (str[i])
		i++;

	while (i--)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
