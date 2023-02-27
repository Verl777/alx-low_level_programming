#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * Return: Always 0
 */

void _puts(char *str)
{
	while (char *str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
