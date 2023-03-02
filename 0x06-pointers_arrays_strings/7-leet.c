#include "main.h"

/**
 * leet - encodes into 1337
 * @str: the string
 * Return: should be a success
 */

char *leet(char *str)
{
	int i = 0;
	int j = 0;
	int k = 5;
	char c[5] = {'A', 'E', 'O', 'T', 'L'};
	char s[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;

		while (j < k)
		{
			if (str[i] == c[j] || str[i] - 32 == c[j])
			{
				str[i] = s[j];
			}

			j++;
		}

		i++;
	}

	return (str);
}
