#include "main.h"

/**
 * sqt_recursion - Print the natural square root of a number.
 * @n: Value
 * @i: Iterator
 * Return: The result of square root
 */
int sqt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqt_recursion(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Value
 * Return: The natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqt_recursion(n, 0));
}
