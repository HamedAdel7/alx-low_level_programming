#include "main.h"

/**
 * _isupper - check if c upper
 * @c: input alphabet
 * Return: 1 upper
 *         0 not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
