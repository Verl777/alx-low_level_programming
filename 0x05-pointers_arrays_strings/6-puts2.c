#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: success
 */

void puts2(char *str)
{
	int i = 0;
	int n = 0;
	char *s = str;
	int o;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	n = i - 1;
	for (o = 0; o <= n; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}

