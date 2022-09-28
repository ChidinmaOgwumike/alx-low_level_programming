#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: number to be used
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * _sqrt - returns the square root of a number
 * @n: test number
 * @c: squared number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int c)
{
	if (n > c / 2)
		return (-1);
	else if (n * n == c)
		return (n);
	return (_sqrt(n + 1, c));
}
