#include "main.h"
/**
 * print_to_98 - prints natural numbers n-98
 * @n: entry number
 * Return: sucess
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(' ', n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				_putchar(n);
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(' ', n);
			}
		}
	}
}
