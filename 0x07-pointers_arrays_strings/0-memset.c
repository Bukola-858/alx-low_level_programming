#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: value
 * @n: Number of bytes to be changed
 *
 * Return: change array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
