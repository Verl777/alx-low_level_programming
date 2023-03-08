#include "main.h"

int actual_prime_number(int n, int a);

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime_number(n, n - 1));
}
/**
 * actual_prime_number - calculates prime number
 * @n: number to iterate
 * @a: iterator
 * Return: 1 if prime, 0 if not
 */
int actual_prime_number(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime_number(n, a - 1));
}
