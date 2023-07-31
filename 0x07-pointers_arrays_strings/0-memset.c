#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: it is char to copy
 * @n: the number of times to copy b
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

