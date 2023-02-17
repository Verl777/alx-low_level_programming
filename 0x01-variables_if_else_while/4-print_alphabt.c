#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase except q and e
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchat('\n');
	return (0);
}
