 #include "main.h"

/**
 * _strpbrk - This function locates the first occurrence inthe string
 * @s: String
 * @accept: String
 *
 * Return: A pointer to a byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
