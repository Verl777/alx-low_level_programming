#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @x: number to be checked
 * Return: last digit
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
