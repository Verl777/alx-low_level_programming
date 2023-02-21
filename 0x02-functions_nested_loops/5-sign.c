#include "main.h"
/**
 * print_sign - prints sign of number
 * @n: checks for the sign
 * Return: 1> zero, 0 = zero, 1 = less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
