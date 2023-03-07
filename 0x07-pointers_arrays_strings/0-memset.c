#include "main.h"
/**
 * _memset - fill memory with specific value.
 * @s: start address of memory
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: success
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
