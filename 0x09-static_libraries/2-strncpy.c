#include "main.h"

/**
 * *_strncpy - Write a function that copies a string.
 * @dest: pointer input
 * @src: pointer input
 * @n: number of string
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
