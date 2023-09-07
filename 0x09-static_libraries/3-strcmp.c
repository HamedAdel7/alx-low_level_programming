#include "main.h"

/**
 * _strcmp - Write a function that compares two strings.
 * @s1: pointer input 1
 * @s2: pointer input 2
 * Return: 1 true
 *         0 false
*/

int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (equal);
}
