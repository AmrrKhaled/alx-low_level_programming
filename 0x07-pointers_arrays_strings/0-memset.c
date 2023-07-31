#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: string passed to function
 * @b: char
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
