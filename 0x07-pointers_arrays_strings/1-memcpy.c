#include "main.h"

/**
 * _memcpy - function that copies bytes from memory area
 * @dest: memory where bytes is stored
 * @src: memory where bytes is copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
