#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @j: pointer
 * Return: n
 */

char *string_toupper(char *j)
{
	int i = 0;

	while (j[i] != '\0')
	{
		if (j[i] >= 'a' && j[i] <= 'z')
			j[i] = j[i] - 32;
		i++;
	}
	return (j);
}
