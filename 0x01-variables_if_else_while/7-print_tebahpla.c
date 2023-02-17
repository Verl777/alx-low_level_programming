#include <stdio.h>
/**
 * main - prints talphabets in reverse lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
