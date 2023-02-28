#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * Return: Always success
 */

void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
