#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where memory is st
 * @src: source of bytes
 * @n: number of bytes
 *
 * Return: copied mem
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
