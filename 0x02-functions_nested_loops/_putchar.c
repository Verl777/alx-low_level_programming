#include "main.h"
#include <unistd.h>/
/**
 * _putchar writes character to standard output
 * @c: the character
 * Reture: always a success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
