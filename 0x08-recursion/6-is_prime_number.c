#include "main.h"

int initial_prime(int n, int i);

/**
 * is_prime_number - States if a number is prime or not
 * @n: Value
 * Return: 1 if n is prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (initial_prime(n, n - 1));
}
/**
 * initial_prime - checks if a number is prime
 * @n: Value
 * @i: Iterator
 * Return: 1 if n is prime else 0
 */
int initial_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (initial_prime(n, i - 1));
}
