#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: success
 */

void print_rev(char *s)
{
	int i = 0;
	int n;

	while (*s != '\n')
	{
		i++;
		s++;
	}
	s--;
	for (n = i; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
