#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: pointer for constant
 * @b: constant
 * @n: max bytes
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
		s[itr] = b;

	return (s);
}
