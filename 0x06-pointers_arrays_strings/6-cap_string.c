#include "main.h"

/**
 * isLower - determines type of char
 * @c: character
 * Return: 1 true
 *         0 false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines spichal char
 * @c: char input
 * Return: 1 true 0 false
*/

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * *cap_string - a function that capitalizes all words of a string
 * @s: pointer input
 * Return: string output
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
