#include "main.h"
/**
 * main - prints letters in lowercase
 * Return: always a success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	_putchar('\n');
}
