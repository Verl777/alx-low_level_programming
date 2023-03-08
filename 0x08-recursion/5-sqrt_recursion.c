#include "main.h"

int actual_sqrt_recursion(int n, int a);

/**
 * _sqrt_recursion - returns squareroot od number
 * @n: integer
 * Return: squareroot of number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find squareroot
 * @n: int
 * @a: iterator
 * Return: squareroot
 */

int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
