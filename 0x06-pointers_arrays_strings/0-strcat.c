#include "main.h"

/**
 * *_strcat - function appends the src string to the dest string
 * @dest: pointer input
 * @src: pointer input
 * Return: pointer result
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;

	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
