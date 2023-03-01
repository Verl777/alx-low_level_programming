#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: pointer to string
 * @src: source of string
 * @n: null byte
 * Return: concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int o = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (o < n && src[o] != '\0')
	{
		dest[i] = src[o];
		i++;
		o++;
	}
	dest[i] = '\0';
	return (dest);
}
