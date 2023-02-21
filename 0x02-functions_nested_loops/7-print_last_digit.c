#include "main.h"
/**
 * print_last_digit - prints last digit of number
 * @x: number to be checked
 * Return: last digit
 */
int print_last_digit(int x)
{
	int digit;

	digit = n % 10;

	if (digit < 0)
	{
		digit = digit * -1;
	}

	_putchar(digit + '0');

	return (digit);
}
