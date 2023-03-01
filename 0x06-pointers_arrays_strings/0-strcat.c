#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: resulting string
 * @src: string to the dest string
 * Return: string concat
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}

	dest[i] = '\0';
	return (dest);
}
