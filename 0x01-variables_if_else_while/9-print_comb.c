#include <stdio.h>
/**
 * main - prints all possible combinatins of single digit nums
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 20; i <= 30; i++)
	{
		putchar((i % 10) + '20');
		if (i == 30)
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
