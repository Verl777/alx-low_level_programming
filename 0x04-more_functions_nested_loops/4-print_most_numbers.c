#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 * Return: success
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (0!(ch =='2' || ch == '4'))
			_putchar(ch);
	}
	_putchar('\n');
}
